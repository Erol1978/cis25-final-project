# Update Player Health — Spec

## Problem statement
The player can take damage and heal during gameplay.

## Types involved
- Player

## Public interface
- void Player::takeDamage(int amount);
- void Player::heal(int amount);

## Inputs and outputs
- Input: damage or heal amount
- Output: updated player health

## Edge cases
- Damage larger than current health
- Heal with negative value
- Health should not go below 0
- Health should not exceed 100

## Three tests
- Normal: player takes damage correctly
- Edge: healing after damage
- Boundary: health stays between 0 and 100

## Design decisions
I used simple integer health updates to match the existing project style.
