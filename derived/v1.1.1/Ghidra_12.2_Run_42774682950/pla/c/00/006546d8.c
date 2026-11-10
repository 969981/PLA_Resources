/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006546d8; name: FUN_006546d8
 */


void FUN_006546d8(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  FUN_006d9cd8(param_1 + 0x90);
  lVar2 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x88);
    FUN_0068d538(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,0x38,8);
  }
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
              (*(long **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x70),
               *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50),
               *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006547ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
            (*(long **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),
             *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffe,1);
  return;
}


