/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212060; name: FUN_00212060
 */


void FUN_00212060(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  lVar1 = *(long *)(param_1 + 0x70);
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0) {
    *(long *)(lVar1 + 0x78) = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x70) = lVar1;
      *(undefined8 *)(lVar2 + 0x80) = 0;
    }
  }
  else {
    *(long *)(lVar3 + 0x88) = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x80) = lVar3;
    }
  }
  *(int *)(lVar1 + 0xd8) = *(int *)(lVar1 + 0xd8) - *(int *)(param_1 + 0xd0);
  if (*(char *)(param_1 + 0xe6) != '\0') {
    FUN_00211e94(param_1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}


