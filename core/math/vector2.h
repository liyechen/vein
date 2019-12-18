#ifndef VECTOR2_H
#define VECTOR2_H

#include <cmath>
#include "math_funcs.h"

namespace vein {

    struct Vector2 {
        union {
            struct {
                union {
                    float x;
                    float width;
                };
                union {
                    float y;
                    float height;
                };
            };
            float coord[2];
        };

        // ctor
        Vector2();

        Vector2(float xx, float yy);

        Vector2(Vector2 const &c);

        // operator overloading
        Vector2 operator+(const Vector2 &obj) const;

        void operator+=(const Vector2 &obj);

        Vector2 operator-(const Vector2 &obj) const;

        void operator-=(const Vector2 &obj);

        Vector2 operator*(float k) const;

        void operator*=(float k);

        // basic attributes
        float length() const;

        float length_squared() const;

        // normalize
        Vector2 normalized() const;

        void normalize();

        bool is_normalized() const;

        // dot
        float dot(const Vector2 &target) const;

        // distance
        float distance_to(const Vector2 &target) const;
    };

    typedef Vector2 Size2;
    typedef Vector2 Point2;

/**
 * operator +
 */
    inline Vector2 Vector2::operator+(const Vector2 &obj) const {
        Vector2 res;
        res.x = x + obj.x;
        res.y = y + obj.y;
        return res;
    }

    inline void Vector2::operator+=(const Vector2 &obj) {
        x = x + obj.x;
        y = y + obj.y;
    }

/**
 * operator -
 */
    inline Vector2 Vector2::operator-(const Vector2 &obj) const {
        Vector2 res;
        res.x = x - obj.x;
        res.y = y - obj.y;
        return res;
    }

    inline void Vector2::operator-=(const Vector2 &obj) {
        x = x - obj.x;
        y = y - obj.y;
    }

/**
 * operator * to float
 */
    inline Vector2 Vector2::operator*(float k) const {
        Vector2 res;
        res.x = x * k;
        res.y = y * k;
        return res;
    }

    inline void Vector2::operator*=(float k) {
        x = x * k;
        y = y * k;
    }

    /**
     * vector length
     */
    inline float Vector2::length() const {
        float x2 = x * x;
        float y2 = y * y;
        return sqrtf(x2 + y2);
    }

    /**
     * vector length squared
     */
    inline float Vector2::length_squared() const {
        return x * x + y * y;
    }

    /**
     * dot
     */
    inline float Vector2::dot(const Vector2 &target) const {
        return x * target.x + y * target.y;
    }

    /**
     * normalize the vector
     */
    inline Vector2 Vector2::normalized() const {
        Vector2 target = *this;
        target.normalize();
        return target;
    }

    /**
     * normalize self
     */
    inline void Vector2::normalize() {
        float len = length();
        if (len != 0.0) {
            x /= len;
            y /= len;
        }
    }

    /*
     * if is a normalized vector
     */
    inline bool Vector2::is_normalized() const {
        return almost_equal(length(), static_cast<float>(1.0), 2);
    }

    /*
     *  distance to another point2
     */
    inline float Vector2::distance_to(const struct vein::Vector2 & target) const {
        return sqrtf(powf(x - target.x, 2.0) + powf(y - target.y, 2.0));
    }
}

#endif  // define VECTOR2_H
