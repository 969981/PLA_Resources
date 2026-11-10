/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045d090; name: FUN_0045d090
 */


undefined8 FUN_0045d090(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  uVar3 = 1;
  if ((param_2 != 0) && (param_1 != param_2)) {
    if (param_1 == 0) {
LAB_0045d198:
      uVar3 = 0;
    }
    else {
      iVar1 = FUN_00407950(param_2);
      if (iVar1 < 1) {
        uVar3 = 1;
      }
      else {
        iVar4 = 0;
        iVar1 = 0;
        do {
          uVar3 = FUN_00407970(param_2,iVar4);
          iVar2 = FUN_0045bcf0(uVar3,auStack_70,auStack_80,param_3);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          iVar2 = FUN_00407950(param_1);
          if (iVar2 <= iVar1) goto LAB_0045d198;
          while( true ) {
            uVar3 = FUN_00407970(param_1,iVar1);
            uVar3 = FUN_0045bcf0(uVar3,auStack_50,auStack_60,param_3);
            if ((int)uVar3 == 0) {
              return uVar3;
            }
            iVar2 = memcmp(auStack_60,auStack_80,(long)param_3);
            if (-1 < iVar2) break;
            iVar1 = iVar1 + 1;
            iVar2 = FUN_00407950(param_1);
            if (iVar2 <= iVar1) goto LAB_0045d198;
          }
          iVar2 = memcmp(auStack_50,auStack_70,(long)param_3);
          if (0 < iVar2) goto LAB_0045d198;
          iVar4 = iVar4 + 1;
          iVar2 = FUN_00407950(param_2);
          uVar3 = 1;
        } while (iVar4 < iVar2);
      }
    }
  }
  return uVar3;
}


