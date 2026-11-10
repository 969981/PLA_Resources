/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002415a8; name: FUN_002415a8
 */


void FUN_002415a8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long local_20;
  long lStack_18;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) != 0)) {
    plVar1 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
    lStack_18 = plVar1[1];
    local_20 = *plVar1 + (ulong)*(uint *)(lVar2 + 0xc);
    FUN_00878324(param_2,*(undefined4 *)
                          (*(long *)(*(long *)(param_1 + 0x20) + 0x20) +
                          (ulong)*(ushort *)(param_1 + 0x4a) * 4),3,&local_20,
                 *(undefined4 *)(lVar2 + 8));
  }
  return;
}


