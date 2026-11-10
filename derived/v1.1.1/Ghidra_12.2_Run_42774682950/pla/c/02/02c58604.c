/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c58604; name: FUN_02c58604
 */


undefined8 FUN_02c58604(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x58))(param_1,0);
  if ((lVar2 == 0) || (uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar2 + 0x98)), (uVar3 & 1) != 0)) {
LAB_02c5865c:
    lVar2 = (**(code **)(*param_1 + 0x58))(param_1,1);
    if ((lVar2 != 0) && (uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar2 + 0x98)), (uVar3 & 1) == 0)) {
      if (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x98) + 0x10) + 4) >> 2 & 1) == 0) &&
         (iVar1 = FUN_02c6849c(), iVar1 == param_2)) goto LAB_02c587b0;
    }
    lVar2 = (**(code **)(*param_1 + 0x58))(param_1,2);
    if ((lVar2 != 0) && (uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar2 + 0x98)), (uVar3 & 1) == 0)) {
      if (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x98) + 0x10) + 4) >> 2 & 1) == 0) &&
         (iVar1 = FUN_02c6849c(), iVar1 == param_2)) goto LAB_02c587b0;
    }
    lVar2 = (**(code **)(*param_1 + 0x58))(param_1,3);
    if ((lVar2 != 0) && (uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar2 + 0x98)), (uVar3 & 1) == 0)) {
      if (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x98) + 0x10) + 4) >> 2 & 1) == 0) &&
         (iVar1 = FUN_02c6849c(), iVar1 == param_2)) goto LAB_02c587b0;
    }
    lVar2 = (**(code **)(*param_1 + 0x58))(param_1,4);
    if ((lVar2 != 0) && (uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar2 + 0x98)), (uVar3 & 1) == 0)) {
      if (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x98) + 0x10) + 4) >> 2 & 1) == 0) &&
         (iVar1 = FUN_02c6849c(), iVar1 == param_2)) goto LAB_02c587b0;
    }
    lVar2 = (**(code **)(*param_1 + 0x58))(param_1,5);
    if ((lVar2 != 0) && (uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar2 + 0x98)), (uVar3 & 1) == 0)) {
      if (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x98) + 0x10) + 4) >> 2 & 1) == 0) &&
         (iVar1 = FUN_02c6849c(), iVar1 == param_2)) goto LAB_02c587b0;
    }
    uVar4 = 0;
  }
  else {
    if (((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x98) + 0x10) + 4) >> 2 & 1) != 0) ||
       (iVar1 = FUN_02c6849c(), iVar1 != param_2)) goto LAB_02c5865c;
LAB_02c587b0:
    uVar4 = 1;
  }
  return uVar4;
}


