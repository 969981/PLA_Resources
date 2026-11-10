/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0078c0dc; name: FUN_0078c0dc
 */


void FUN_0078c0dc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_007897dc(uVar1,param_2);
    param_1[1] = param_1[1] + 0xe8;
    return;
  }
  lVar4 = (long)(uVar1 - *param_1) >> 3;
  uVar9 = 0x11a7b9611a7b961;
  uVar1 = lVar4 * 0x34f72c234f72c235 + 1;
  if (0x11a7b9611a7b961 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar2 * 0x34f72c234f72c235) < 0x8d3dcb08d3dcb0) {
    uVar3 = lVar2 * 0x69ee58469ee5846a;
    uVar9 = uVar1;
    if (uVar1 <= uVar3) {
      uVar9 = uVar3;
    }
    if (uVar9 == 0) {
      lVar2 = 0;
      goto LAB_0078c1b0;
    }
  }
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 * 0xe8,8);
LAB_0078c1b0:
  lVar6 = lVar2 + lVar4 * 8;
                    /* try { // try from 0078c1b8 to 0078c1c3 has its CatchHandler @ 0078c288 */
  FUN_007897dc(lVar6,param_2);
  puVar7 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar4 = lVar6 + 0xe8;
  if (puVar8 == puVar7) {
    puVar8 = puVar7;
  }
  else {
    do {
      puVar8 = puVar8 + -0x1d;
                    /* try { // try from 0078c1dc to 0078c1e3 has its CatchHandler @ 0078c29c */
      FUN_007897dc(lVar6 + -0xe8,puVar8);
      lVar6 = lVar6 + -0xe8;
    } while (puVar7 != puVar8);
    puVar7 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
  }
  lVar5 = param_1[2];
  *param_1 = lVar6;
  param_1[1] = lVar4;
  param_1[2] = lVar2 + uVar9 * 0xe8;
  while (puVar7 != puVar8) {
    puVar7 = puVar7 + -0x1d;
    (**(code **)*puVar7)(puVar7);
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0078c25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar8,lVar5 - (long)puVar8,8);
  return;
}


