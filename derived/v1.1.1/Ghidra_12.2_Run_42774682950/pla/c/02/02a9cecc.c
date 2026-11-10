/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9cecc; name: FUN_02a9cecc
 */


void FUN_02a9cecc(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x288);
  pcVar1 = *(code **)(lVar2 + 0x68);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    (*pcVar1)(lVar2 + 0x80);
  }
  *(undefined1 **)(lVar2 + 0x60) = &LAB_02b278f0;
  *(undefined1 **)(lVar2 + 0x68) = &LAB_02b27ab0;
  *(undefined1 **)(lVar2 + 0x70) = &LAB_02b27ab4;
  *(undefined1 **)(lVar2 + 0x78) = &LAB_02b27ab8;
  return;
}


