/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00562088; name: FUN_00562088
 */


undefined8 FUN_00562088(uint *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  FUN_005621a4(param_1,0xffffffff,0);
  if ((*param_2 != 0x14) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_00562168;
  FUN_005600fc(*(long *)(param_2 + 0x20),param_1[0xb]);
  lVar3 = *(long *)(param_2 + 0x20);
  if (*(int *)(lVar3 + 8) == 2) {
    iVar5 = *(int *)(*(long *)(lVar3 + 0x10) + 0x1c);
    if (0x19 < iVar5 - 0x41U) goto LAB_00562168;
    iVar5 = iVar5 + 0x20;
    uVar4 = FUN_005600b4(lVar3,iVar5);
    if ((uVar4 & 1) == 0) goto LAB_00562168;
    FUN_0055de34(param_2);
    uVar1 = *param_1;
    param_2 = (byte *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (param_2 != (byte *)0x0) {
      uVar1 = uVar1 | 1;
      goto LAB_00562158;
    }
  }
  else {
    if (*(int *)(lVar3 + 8) != 1) goto LAB_00562168;
    iVar5 = *(int *)(*(long *)(lVar3 + 0x10) + 0x1c);
    FUN_0055de34(param_2);
    param_2 = (byte *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (param_2 != (byte *)0x0) {
      uVar1 = *param_1;
LAB_00562158:
      FUN_0055da3c(param_2,3,uVar1);
    }
  }
  *(int *)(param_2 + 0x18) = iVar5;
LAB_00562168:
  if (*param_2 < 0x16) {
    bVar2 = FUN_00567000(param_2);
    param_2[1] = bVar2 & 1;
  }
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(byte **)(param_1 + 8) = param_2;
  return 1;
}


