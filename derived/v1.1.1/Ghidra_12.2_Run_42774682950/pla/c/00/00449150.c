/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00449150; name: FUN_00449150
 */


undefined4
FUN_00449150(ulong param_1,uint param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_38 [20];
  undefined1 local_24 [4];
  
  if (param_1 >> 0x20 != 0) {
    return 0xffffffff;
  }
  if (param_1 < 0x10000) {
    if (0xff < param_1) {
      FUN_00403120(auStack_38,0x13,"\\U%04lX");
      uVar5 = 6;
      puVar2 = auStack_38;
      uVar3 = 6;
      goto LAB_004491d0;
    }
    uVar4 = (uint)param_1;
    local_24[0] = (undefined1)param_1;
    if ((uVar4 >> 7 & 1) == 0) {
      uVar6 = *(ushort *)(&DAT_03a0be80 + (param_1 & 0xff) * 2) & param_2;
      if ((uVar6 & 0x61) != 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          iVar1 = (*param_4)(param_5,&DAT_038e5aa0,1);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          iVar1 = (*param_4)(param_5,local_24,1);
          uVar5 = 2;
          if (iVar1 == 0) {
            uVar5 = 0xffffffff;
          }
          return uVar5;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        goto LAB_004492b0;
      }
    }
    else {
      uVar6 = param_2 & 4;
    }
    if ((uVar6 & 0x406) == 0) {
      if (((uVar4 & 0xff) != 0x5c) || ((param_2 & 0x40f) == 0)) {
LAB_004492b0:
        iVar1 = (*param_4)(param_5,local_24,1);
        uVar5 = 1;
        if (iVar1 == 0) {
          uVar5 = 0xffffffff;
        }
        return uVar5;
      }
      puVar2 = &DAT_03910753;
      uVar5 = 2;
      uVar3 = 2;
    }
    else {
      FUN_00403120(auStack_38,0xb,"\\%02X",uVar4 & 0xff);
      uVar5 = 3;
      puVar2 = auStack_38;
      uVar3 = 3;
    }
  }
  else {
    FUN_00403120(auStack_38,0x13,"\\W%08lX");
    uVar5 = 10;
    puVar2 = auStack_38;
    uVar3 = 10;
  }
LAB_004491d0:
  iVar1 = (*param_4)(param_5,puVar2,uVar3);
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


