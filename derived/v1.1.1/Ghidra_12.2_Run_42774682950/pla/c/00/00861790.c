/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00861790; name: FUN_00861790
 */


void FUN_00861790(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_007e3400(param_1 + 5);
  FUN_007e3400(param_1 + 9);
  *(undefined2 *)(param_1 + 0xd) = 0;
  FUN_007ecf14(param_1);
  FUN_007ecf14(param_1 + 1);
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_007e4488(param_1 + 5);
  FUN_007e4488(param_1 + 9);
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  lVar1 = FUN_0085a3c0();
  if (lVar1 == 0) {
    fVar2 = 5.0;
  }
  else {
    fVar2 = (float)*(int *)(lVar1 + 4);
    if (*(int *)(lVar1 + 4) < 1) {
      fVar2 = 5.0;
    }
  }
  *(float *)(param_1 + 0xe) = fVar2;
  return;
}


