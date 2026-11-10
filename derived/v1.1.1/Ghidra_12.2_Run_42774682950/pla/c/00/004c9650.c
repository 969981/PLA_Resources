/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c9650; name: FUN_004c9650
 */


undefined8 FUN_004c9650(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  *(long *)(param_1 + 0x810) = param_2;
  if (param_3 == 0) {
    lVar5 = 5;
    if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      lVar5 = 0xe;
    }
    iVar1 = FUN_004c5ac0(param_1);
    iVar2 = FUN_004da9e0(param_1);
    param_3 = 3;
    if (iVar2 != 0) {
      param_3 = 0x403;
    }
    param_3 = lVar5 + (ulong)(iVar1 + 0x50) + param_3;
    if ((*(byte *)(param_1 + 0x5cd) >> 3 & 1) == 0) {
      param_3 = lVar5 + param_3 + 0x53;
    }
  }
  if (param_2 == 0) {
LAB_004c9750:
    uVar4 = 1;
  }
  else {
    lVar5 = 0;
    plVar6 = (long *)(param_1 + 0x840);
    lVar3 = *plVar6;
    if (lVar3 != 0) goto LAB_004c9708;
LAB_004c9724:
    lVar3 = FUN_00400260(param_3,"external/openssl/ssl/record/ssl3_buffer.c",0x78);
    if (lVar3 != 0) {
      plVar6[2] = 0;
      plVar6[1] = 0;
      *plVar6 = lVar3;
      plVar6[2] = param_3;
      plVar6[4] = 0;
      plVar6[3] = 0;
      do {
        lVar5 = lVar5 + 1;
        plVar6 = plVar6 + 5;
        if (param_2 == lVar5) goto LAB_004c9750;
        lVar3 = *plVar6;
        if (lVar3 == 0) goto LAB_004c9724;
LAB_004c9708:
      } while (plVar6[2] == param_3);
      FUN_00400420(lVar3,"external/openssl/ssl/record/ssl3_buffer.c",0x73);
      *plVar6 = 0;
      goto LAB_004c9724;
    }
    *(long *)(param_1 + 0x810) = lVar5;
    FUN_004c99a0(param_1,0xffffffff,0x123,0x41,"external/openssl/ssl/record/ssl3_buffer.c",0x81);
    uVar4 = 0;
  }
  return uVar4;
}


