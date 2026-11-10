/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c31fac; name: FUN_02c31fac
 */


void FUN_02c31fac(long *param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = (**(code **)(*param_1 + 0x78))((int)param_1,&local_14,&local_18);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0);
    if (((*(char *)(lVar5 + 0xe8) == (char)local_14) && (*(char *)(lVar5 + 0xe9) == local_14._1_1_))
       && (*(char *)(lVar5 + 0xea) == local_14._2_1_)) {
      uVar4 = (uint)(*(char *)(lVar5 + 0xeb) != local_14._3_1_);
    }
    else {
      uVar4 = 1;
    }
    uVar1 = *(ushort *)(lVar5 + 0x114);
    uVar2 = uVar1 >> 2 & 1 | uVar4;
    *(ushort *)(lVar5 + 0x114) = uVar1 & 0xfffb | (ushort)(uVar2 << 2);
    if (uVar4 == 0) {
      if (((*(char *)(lVar5 + 0xec) == (char)local_18) &&
          (*(char *)(lVar5 + 0xed) == local_18._1_1_)) &&
         (*(char *)(lVar5 + 0xee) == local_18._2_1_)) {
        bVar3 = *(char *)(lVar5 + 0xef) != local_18._3_1_;
        *(ushort *)(lVar5 + 0x114) = uVar1 & 0xfffb | (ushort)((uVar2 | bVar3) << 2);
        if (!bVar3) {
          return;
        }
      }
      else {
        *(ushort *)(lVar5 + 0x114) = uVar1 | 4;
      }
    }
    *(undefined4 *)(lVar5 + 0xe8) = local_14;
    *(undefined4 *)(lVar5 + 0xec) = local_18;
  }
  return;
}


