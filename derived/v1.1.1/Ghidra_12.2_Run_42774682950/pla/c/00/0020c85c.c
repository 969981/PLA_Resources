/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c85c; name: FUN_0020c85c
 */


void FUN_0020c85c(undefined8 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[5] = param_6;
  param_1[6] = param_7;
  *(undefined4 *)(param_1 + 7) = param_4;
  if (param_5 == (undefined8 *)0x0) {
    FUN_00205bfc();
    return;
  }
  uVar1 = *param_5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_5 + 1);
  param_1[3] = uVar1;
  return;
}


