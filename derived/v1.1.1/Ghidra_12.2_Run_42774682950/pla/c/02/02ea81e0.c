/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea81e0; name: FUN_02ea81e0
 */


void FUN_02ea81e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = DAT_0440a418 + (ulong)DAT_0440a420 * 10;
  piVar1 = DAT_0440a418;
  if (DAT_0440a420 != 0) {
    lVar4 = (ulong)DAT_0440a420 * 0x28;
    do {
      if (((*piVar1 == *param_1) && (piVar1[4] == param_1[4])) &&
         (*(long *)(piVar1 + 2) == *(long *)(param_1 + 2))) goto LAB_02ea8254;
      lVar4 = lVar4 + -0x28;
      piVar1 = piVar1 + 10;
    } while (lVar4 != 0);
    piVar1 = piVar2;
  }
LAB_02ea8254:
  if (piVar2 != piVar1) {
    if (piVar1 < piVar2 + -10) {
      do {
        piVar3 = piVar1 + 10;
        *(undefined8 *)piVar1 = *(undefined8 *)piVar3;
        *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(piVar1 + 0xc);
        *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(piVar1 + 0x12);
        *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(piVar1 + 0xe);
        *(undefined8 *)(piVar1 + 6) = *(undefined8 *)(piVar1 + 0x10);
        piVar1 = piVar3;
      } while (piVar3 < piVar2 + -10);
    }
    DAT_0440a420 = DAT_0440a420 - 1;
  }
  return;
}


