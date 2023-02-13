
/*
 * BIT_MATH.h
 *
 * Created: 1/3/2023 2:19:58 PM
 *  Author: Mina
 */ 

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define  SET_BIT(REG,BIT_NUM)    ((REG)|=(1<<(BIT_NUM)))
#define  CLEAR_BIT(REG,BIT_NUM)  ((REG)&=(~(1<<(BIT_NUM))))
#define  GET_BIT(REG,BIT_NUM)    (((REG)>>(BIT_NUM))&1)
#define  TOG_BIT(REG,BN)         ((REG) ^= (1<<(BN)))

#define  IS_LOW(REG,BIT_NUM)     (!(((REG)>>(BIT_NUM))&1))
#define  IS_HIGH(REG,BIT_NUM)    (((REG)>>(BIT_NUM))&1)

#define  ROR(DATA,N)       ((DATA)=((DATA>>N)|((DATA)<<(8-(N)))))
#define  ROL(DATA,N)       ((DATA)=((DATA<<N)|((DATA)>>(8-(N)))))

#endif