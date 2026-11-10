/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00452850; name: FUN_00452850
 */


long * FUN_00452850(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                   long param_6)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int local_34;
  
  plVar3 = param_1;
  if ((param_1 == (long *)0x0) && (plVar3 = (long *)FUN_00452550(0,0), plVar3 == (long *)0x0)) {
    return (long *)0x0;
  }
  if (*plVar3 == 0) {
    lVar4 = FUN_0040c260();
    *plVar3 = lVar4;
    if (lVar4 == 0) goto LAB_00452978;
  }
  if (plVar3[1] == 0) {
    lVar4 = FUN_0040c260();
    plVar3[1] = lVar4;
    if (lVar4 == 0) goto LAB_00452978;
  }
  lVar4 = plVar3[2];
  if (param_2 != 0) {
    FUN_0040c1e0();
    lVar4 = FUN_0040c480(param_2);
    plVar3[2] = lVar4;
  }
  if (lVar4 != 0) {
    if (param_5 != 0) {
      plVar3[8] = param_5;
    }
    if (param_6 != 0) {
      plVar3[7] = param_6;
    }
    iVar2 = FUN_00426fa0(*plVar3,plVar3[3]);
    if (iVar2 != 0) {
      uVar5 = 0xffffffdf;
      do {
        lVar4 = FUN_00410e60(plVar3[1],*plVar3,plVar3[3],param_4,&local_34);
        if (lVar4 != 0) {
          if (((code *)plVar3[8] == (code *)0x0) || (plVar3[7] == 0)) {
            iVar2 = FUN_00424be0(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          else {
            iVar2 = (*(code *)plVar3[8])(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          if (iVar2 != 0) {
            if (plVar3[7] == 0) {
              return plVar3;
            }
            iVar2 = FUN_0040d8d0(plVar3[1],plVar3[1],plVar3[7],param_4);
            if ((iVar2 != 0) &&
               (iVar2 = FUN_0040d8d0(*plVar3,*plVar3,plVar3[7],param_4), iVar2 != 0)) {
              return plVar3;
            }
          }
          break;
        }
        if (local_34 == 0) break;
        bVar1 = 0xfffffffe < uVar5;
        uVar5 = uVar5 + 1;
        if (bVar1) {
          FUN_004014b0(3,0x80,0x71,"external/openssl/crypto/bn/bn_blind.c",0x11d);
          break;
        }
        iVar2 = FUN_00426fa0(*plVar3,plVar3[3]);
      } while (iVar2 != 0);
    }
  }
LAB_00452978:
  if (param_1 == (long *)0x0) {
    FUN_0040c1e0(*plVar3);
    FUN_0040c1e0(plVar3[1]);
    FUN_0040c1e0(plVar3[2]);
    FUN_0040c1e0(plVar3[3]);
    FUN_00400180(plVar3[9]);
    FUN_00400420(plVar3,"external/openssl/crypto/bn/bn_blind.c",0x5a);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


