/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309f010; name: FUN_0309f010
 */


void FUN_0309f010(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2 + 0x48);
  lVar7 = (ulong)*(byte *)(param_1 + 0x18) + (long)*(short *)(param_1 + 0x16) + -1;
  lVar5 = lVar8 + lVar7 * 0xc;
  *(ushort *)(lVar5 + 4) = *(ushort *)(lVar5 + 4) | 0x8000;
  iVar3 = *(int *)(param_2 + 0x70);
  lVar5 = *(long *)(param_2 + 0x68);
  if (iVar3 < (int)(*(uint *)(param_2 + 0x74) & 0x3fffffff)) {
    iVar4 = iVar3;
  }
  else {
    lVar5 = FUN_030a30e4(PTR_PTR_0434a080,iVar3 + 1,lVar5,iVar3);
    iVar4 = *(int *)(param_2 + 0x70);
    *(long *)(param_2 + 0x68) = lVar5;
  }
  *(int *)(param_2 + 0x70) = iVar3 + 1;
  uVar2 = param_3[1];
  uVar6 = param_3[2];
  puVar1 = (undefined8 *)(lVar5 + (long)iVar4 * 0x20);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1[2] = uVar6;
  puVar1[3] = param_4;
  *(char *)(lVar8 + lVar7 * 0xc + 9) = (char)iVar3;
  *(undefined1 *)(param_1 + 0x61) = 1;
  return;
}


