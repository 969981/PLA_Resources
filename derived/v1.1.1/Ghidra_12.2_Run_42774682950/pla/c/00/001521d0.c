/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001521d0; name: FUN_001521d0
 */


uint FUN_001521d0(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_1 + 0x20);
        plVar2 = &DAT_039c5c28;
        if ((int)plVar4[1] != 0x16) {
          lVar1 = *plVar4;
          plVar2 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar1 + 10)) {
            plVar2 = (long *)(lVar1 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar2) {
      plVar2 = &DAT_039c5c28;
    }
  }
  lVar1 = *plVar2;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = *(undefined8 *)(lVar1 + 0x20);
  *(uint *)(puVar3 + 1) = (uint)*(byte *)(lVar1 + 10);
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  return *(uint *)(lVar1 + 8) & 0xf;
}


