/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148cc94; name: FUN_0148cc94
 */


void FUN_0148cc94(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_2;
  lVar1 = param_1 + (long)param_2 * 0x370;
  if ((*(char *)(lVar1 + 0x651) != '\0') || (*(char *)(param_1 + lVar2 * 0x370 + 0x650) != '\0')) {
    *(undefined1 *)(lVar1 + 0x651) = 0;
    lVar1 = param_1 + lVar2 * 0x370;
    *(undefined1 *)(lVar1 + 0x650) = 0;
    *(undefined4 *)(lVar1 + 0x658) = *(undefined4 *)(lVar1 + 0x654);
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),param_1 + lVar2 * 0x370 + 0x5b0);
    }
  }
  lVar1 = param_1 + lVar2 * 0x370;
  if ((*(char *)(lVar1 + 0x701) != '\0') || (*(char *)(param_1 + lVar2 * 0x370 + 0x700) != '\0')) {
    *(undefined1 *)(lVar1 + 0x701) = 0;
    lVar1 = param_1 + lVar2 * 0x370;
    *(undefined1 *)(lVar1 + 0x700) = 0;
    *(undefined4 *)(lVar1 + 0x708) = *(undefined4 *)(lVar1 + 0x704);
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),param_1 + lVar2 * 0x370 + 0x660);
    }
  }
  lVar1 = param_1 + lVar2 * 0x370;
  if ((*(char *)(lVar1 + 0x7b1) != '\0') || (*(char *)(param_1 + lVar2 * 0x370 + 0x7b0) != '\0')) {
    *(undefined1 *)(lVar1 + 0x7b1) = 0;
    lVar1 = param_1 + lVar2 * 0x370;
    *(undefined1 *)(lVar1 + 0x7b0) = 0;
    *(undefined4 *)(lVar1 + 0x7b8) = *(undefined4 *)(lVar1 + 0x7b4);
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),param_1 + lVar2 * 0x370 + 0x710);
    }
  }
  lVar1 = param_1 + lVar2 * 0x370;
  if ((*(char *)(lVar1 + 0x861) != '\0') || (*(char *)(param_1 + lVar2 * 0x370 + 0x860) != '\0')) {
    *(undefined1 *)(lVar1 + 0x861) = 0;
    lVar1 = param_1 + lVar2 * 0x370;
    *(undefined1 *)(lVar1 + 0x860) = 0;
    *(undefined4 *)(lVar1 + 0x868) = *(undefined4 *)(lVar1 + 0x864);
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),param_1 + lVar2 * 0x370 + 0x7c0);
    }
  }
  lVar1 = param_1 + lVar2 * 0x370;
  if ((*(char *)(lVar1 + 0x911) != '\0') || (*(char *)(param_1 + lVar2 * 0x370 + 0x910) != '\0')) {
    *(undefined1 *)(lVar1 + 0x911) = 0;
    lVar1 = param_1 + lVar2 * 0x370;
    *(undefined1 *)(lVar1 + 0x910) = 0;
    *(undefined4 *)(lVar1 + 0x918) = *(undefined4 *)(lVar1 + 0x914);
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),param_1 + lVar2 * 0x370 + 0x870);
      return;
    }
  }
  return;
}


