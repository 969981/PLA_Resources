/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413930; name: FUN_00413930
 */


long * FUN_00413930(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar1 = (long *)FUN_00409c80();
  if (plVar1 == (long *)0x0) {
    uVar3 = 0xd;
    uVar4 = 0x1c;
    goto LAB_00413a30;
  }
  *(uint *)(plVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
  iVar5 = *(int *)((long)param_1 + 0x14);
  if (iVar5 < 1) {
LAB_00413994:
    *(int *)((long)plVar1 + 0x14) = iVar5;
    *(int *)(plVar1 + 2) = (int)param_1[2];
    if (param_1[1] != 0) {
      lVar2 = FUN_00404f10(param_1[1],"external/openssl/crypto/objects/obj_lib.c",0x2c);
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB_00413a10;
    }
    if (*param_1 == 0) {
      return plVar1;
    }
    lVar2 = FUN_00404f10(*param_1,"external/openssl/crypto/objects/obj_lib.c",0x2f);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
  }
  else {
    lVar2 = FUN_00405020(param_1[3],(long)iVar5,"external/openssl/crypto/objects/obj_lib.c",0x26);
    plVar1[3] = lVar2;
    if (lVar2 != 0) {
      iVar5 = *(int *)((long)param_1 + 0x14);
      goto LAB_00413994;
    }
  }
LAB_00413a10:
  FUN_00409be0(plVar1);
  uVar3 = 0x41;
  uVar4 = 0x35;
LAB_00413a30:
  FUN_004014b0(8,0x65,uVar3,"external/openssl/crypto/objects/obj_lib.c",uVar4);
  return (long *)0x0;
}


