/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113219c; name: FUN_0113219c
 */


void FUN_0113219c(long param_1,long param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f420));
  uVar4 = FUN_02c6cf3c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar4 & 1) != 0) ||
     ((*(ushort *)(*(long *)(*(long *)(param_2 + 0x98) + 0x10) + 4) >> 2 & 1) != 0))
  goto LAB_0113226c;
  iVar2 = FUN_02c6849c();
  sVar1 = FUN_02c6f924(*(undefined8 *)(param_2 + 0x98));
  if (iVar2 < 0x225) {
    if ((iVar2 == 0x3b) || (iVar2 == 0x65)) goto LAB_01132280;
  }
  else if ((iVar2 == 0x225) || (iVar2 == 0x2c9)) {
LAB_01132280:
    if (sVar1 == 2) goto LAB_0113226c;
  }
  else if ((iVar2 == 900) && (sVar1 == 1)) goto LAB_0113226c;
  uVar3 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
  if ((int)uVar3 < 0x3d5) {
    lVar5 = param_1 + (ulong)uVar3 * 0x58;
    *(uint *)(lVar5 + 0xdc) = *(uint *)(lVar5 + 0xdc) | 1;
    if (*(ushort *)(lVar5 + 0xe8) == 0) {
      uVar6 = *(ushort *)(param_1 + 0x72);
      if (uVar6 >> 5 < 0x753) {
        uVar6 = uVar6 + 1;
        *(ushort *)(param_1 + 0x72) = uVar6;
      }
      *(ushort *)(lVar5 + 0xe8) = uVar6;
    }
  }
  FUN_011322b0(param_1,param_2);
LAB_0113226c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f420));
  return;
}


