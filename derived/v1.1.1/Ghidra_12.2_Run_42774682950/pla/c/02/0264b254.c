/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0264b254; name: FUN_0264b254
 */


void FUN_0264b254(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    FUN_0264af94(param_1);
    *(undefined4 *)(param_1 + 0xd00) = 0;
    *(undefined8 *)(param_1 + 0xd10) = 0;
    *(undefined8 *)(param_1 + 0xd18) = 0;
    *(undefined8 *)(param_1 + 0xd20) = 0;
    *(undefined8 *)(param_1 + 0xd28) = 0;
    *(undefined8 *)(param_1 + 0xd30) = 0;
    *(undefined8 *)(param_1 + 0xd38) = 0;
    *(undefined8 *)(param_1 + 0xd40) = 0;
    *(undefined8 *)(param_1 + 0xd48) = 0;
    *(undefined8 *)(param_1 + 0xd50) = 0;
    *(undefined8 *)(param_1 + 0xd58) = 0;
    *(undefined8 *)(param_1 + 0xd60) = 0;
    *(undefined8 *)(param_1 + 0xd68) = 0;
  }
  else if (*(int *)(param_1 + 0xd00) == 1) {
    *(undefined8 *)(param_1 + 0xd10) = *(undefined8 *)(param_1 + 0xd20);
    *(undefined8 *)(param_1 + 0xd40) = *(undefined8 *)(param_1 + 0xd50);
    *(undefined8 *)(param_1 + 0xd48) = *(undefined8 *)(param_1 + 0xd58);
    *(undefined8 *)(param_1 + 0xd18) = *(undefined8 *)(param_1 + 0xd28);
    *(undefined8 *)(param_1 + 0xd00) = 2;
  }
  return;
}


