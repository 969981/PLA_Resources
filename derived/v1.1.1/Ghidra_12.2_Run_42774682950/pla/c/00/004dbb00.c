/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dbb00; name: FUN_004dbb00
 */


undefined8 FUN_004dbb00(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [8];
  
  iVar1 = FUN_004cac70(param_3,2);
  if (iVar1 == 0) {
    uVar5 = 0x8fc;
  }
  else {
    if ((param_2 != 0) && (iVar1 = FUN_00407950(param_2), 0 < iVar1)) {
      iVar1 = 0;
      do {
        lVar4 = FUN_00407970(param_2,iVar1);
        if ((((lVar4 == 0) || (iVar2 = FUN_0044abd0(lVar4,0), iVar2 < 0)) ||
            (iVar3 = FUN_004cab10(param_3,(long)iVar2,auStack_38,2), iVar3 == 0)) ||
           (iVar3 = FUN_0044abd0(lVar4,auStack_38), iVar3 != iVar2)) {
          uVar5 = 0x90e;
          goto LAB_004dbc0c;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_00407950(param_2);
      } while (iVar1 < iVar2);
    }
    iVar1 = FUN_004cade0(param_3);
    if (iVar1 != 0) {
      return 1;
    }
    uVar5 = 0x916;
  }
LAB_004dbc0c:
  FUN_004c99a0(param_1,0x50,0x228,0x44,"external/openssl/ssl/statem/statem_lib.c",uVar5);
  return 0;
}


