/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03326adc; name: FUN_03326adc
 */


void FUN_03326adc(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  
  if (PTR_FUN_04350660 != (undefined *)0x0) {
    pcVar6 = (char *)(param_1 + 0x50);
    if (*pcVar6 != '\0') {
      iVar1 = FUN_032c4900(pcVar6);
      lVar3 = (long)iVar1 - (ulong)(iVar1 == 0xff);
      *(undefined1 *)(param_1 + 0x50 + (long)(int)lVar3 + 1) = 0;
      *(undefined1 *)(param_1 + 0x50 + lVar3) = 10;
      (*(code *)PTR_FUN_04350660)(pcVar6,0);
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x28);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar5;
  }
  plVar2 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
  *(undefined8 *)(uVar4 - 0x11) = 0;
                    /* WARNING: Could not recover jumptable at 0x03326ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))
            (plVar2,(undefined8 *)(uVar4 - 0x11),(long)*(int *)(uVar4 - 9) + 0x10);
  return;
}


