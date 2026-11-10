/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060d254; name: FUN_0060d254
 */


void FUN_0060d254(long *param_1,undefined2 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined2 uVar2;
  long lVar3;
  undefined2 uVar4;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  plVar1 = param_1 + 2;
  *param_1 = (long)(PTR_DAT_04375370 + 0x10);
                    /* try { // try from 0060d280 to 0060d287 has its CatchHandler @ 0060d2c8 */
  FUN_00609e38(plVar1);
                    /* try { // try from 0060d288 to 0060d29b has its CatchHandler @ 0060d2cc */
  FUN_0060a008(plVar1,param_3);
  lVar3 = FUN_0060a078(plVar1);
  uVar4 = 0x14;
  if (*(int *)(lVar3 + 8) != 0x1c) {
    uVar4 = 0;
  }
  uVar2 = 8;
  if (*(int *)(lVar3 + 8) != 2) {
    uVar2 = uVar4;
  }
  *(undefined2 *)((long)param_1 + 10) = uVar2;
  return;
}


