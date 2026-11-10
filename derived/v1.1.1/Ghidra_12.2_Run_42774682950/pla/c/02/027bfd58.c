/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bfd58; name: FUN_027bfd58
 */


void FUN_027bfd58(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int local_50 [4];
  uint local_40 [4];
  
  if (((*(long *)(param_1 + 0x70) != 0) && (uVar1 = FUN_02a43a8c(), (uVar1 & 1) == 0)) &&
     (plVar4 = *(long **)(param_1 + 0x80), plVar4 != (long *)0x0)) {
    if (*(char *)(param_1 + 0x5a0) != '\0') {
      if (((*(char *)(param_1 + 0x1a9) == '\0') && (lVar2 = FUN_02cbb620(0), lVar2 != 0)) &&
         ((10 < *(uint *)(lVar2 + 0x78) ||
          ((1 << (ulong)(*(uint *)(lVar2 + 0x78) & 0x1f) & 0x736U) == 0)))) {
        local_40[0] = local_40[0] & 0xffffff00;
        lVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,local_40);
        if (((lVar3 != 0) && (FUN_00853178(local_40,lVar2,lVar3), local_40[0] == 0)) &&
           (FUN_00852fe8(local_50,lVar2,lVar3,param_1 + 0x120,0x80,0), local_50[0] == 0)) {
          *(long *)(param_1 + 0x1a0) = lVar3;
          *(undefined1 *)(param_1 + 0x1a9) = 1;
        }
      }
      if (*(char *)(param_1 + 0x5a0) == '\x01') {
        return;
      }
    }
    if (((*(char *)(param_1 + 0x239) == '\0') && (lVar2 = FUN_02cbb620(1), lVar2 != 0)) &&
       ((10 < *(uint *)(lVar2 + 0x78) ||
        ((1 << (ulong)(*(uint *)(lVar2 + 0x78) & 0x1f) & 0x736U) == 0)))) {
      local_40[0] = CONCAT31(local_40[0]._1_3_,1);
      lVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,local_40);
      if (((lVar3 != 0) && (FUN_00853178(local_40,lVar2,lVar3), local_40[0] == 0)) &&
         (FUN_00852fe8(local_50,lVar2,lVar3,param_1 + 0x1b0,0x80,0), local_50[0] == 0)) {
        *(long *)(param_1 + 0x230) = lVar3;
        *(undefined1 *)(param_1 + 0x239) = 1;
      }
    }
  }
  return;
}


