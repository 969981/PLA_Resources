/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094786c; name: thunk_FUN_00947870
 */


void thunk_FUN_00947870(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long alStack_d0 [2];
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  
  alStack_d0[0] = 0;
  puStack_c0 = (undefined1 *)0x0;
  pcStack_b8 = (code *)0x0;
  puStack_b0 = (undefined1 *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  uStack_40 = *(undefined8 *)(param_1 + 0xb0);
  lVar4 = *(long *)(DAT_043a88c8 + 0x28);
  plVar2 = (long *)(*(code *)**(undefined8 **)(lVar4 + 8))((undefined8 *)(lVar4 + 8));
  lVar3 = FUN_0094cc80();
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    if (plVar2 == (long *)lVar3) goto LAB_009478e0;
  }
  lVar4 = 0;
LAB_009478e0:
  puStack_c0 = &LAB_0094cfd0;
  pcStack_b8 = FUN_0094cfd8;
  puStack_b0 = &LAB_0094d020;
  puStack_a8 = &LAB_0094d024;
  alStack_d0[0] = lVar4;
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x40))(*(long **)(param_1 + 0xb8),alStack_d0);
  pcVar1 = pcStack_b8;
  if (pcStack_b8 != (code *)0x0) {
    puStack_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    puStack_c0 = (undefined1 *)0x0;
    pcStack_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  return;
}


