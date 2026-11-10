/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7f8fc; name: FUN_01b7f8fc
 */


void FUN_01b7f8fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)*param_1;
  if (*(char *)(lVar2 + 0x638) == '\0') {
    uVar1 = *(undefined8 *)(param_1[1] + 0x10);
    *(undefined8 *)(lVar2 + 0x5d8) = *(undefined8 *)(param_1[1] + 0x18);
    *(undefined1 *)(lVar2 + 0x638) = 1;
    *(undefined8 *)(lVar2 + 0x5d0) = uVar1;
    *(undefined4 *)(lVar2 + 0x5f8) = 2;
    lVar2 = *(long *)*param_1;
  }
  FUN_01b6ea8c(lVar2,param_1[1]);
  FUN_01b6eaec(*(undefined8 *)*param_1,param_1[1]);
  FUN_01b6eaf4(*(undefined8 *)*param_1,param_1[1]);
  FUN_01b6ec48(*(undefined8 *)*param_1);
  return;
}


