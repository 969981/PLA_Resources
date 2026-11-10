/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125207c; name: FUN_0125207c
 */


void FUN_0125207c(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + 0x1330);
  if (cVar1 == '\x01') {
    uVar2 = FUN_01251f4c(param_1);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1330) = 2;
    }
  }
  else if (cVar1 == '\x03') {
    uVar2 = FUN_01251f4c(param_1);
    if ((uVar2 & 1) != 0) {
      FUN_00d42438(param_1,1,1);
      *(undefined1 *)(param_1 + 0x1330) = 0;
    }
  }
  else if (cVar1 == '\x02') {
    FUN_012514cc(param_1,1);
    FUN_0124fbcc(param_1);
    FUN_01251078(param_1);
    FUN_0124f408(param_1,*(undefined4 *)
                          (*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4));
    FUN_01251e94(param_1);
    *(undefined1 *)(param_1 + 0x1330) = 3;
  }
  return;
}


