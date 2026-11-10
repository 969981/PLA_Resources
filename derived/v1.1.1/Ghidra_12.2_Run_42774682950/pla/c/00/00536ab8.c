/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00536ab8; name: FUN_00536ab8
 */


void FUN_00536ab8(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_002ef750(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x28);
  uVar1 = 0;
  if (lVar6 - lVar4 != 0) {
    uVar1 = (lVar6 - lVar4) * 0x20 - 1;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  uVar7 = lVar3 + *(long *)(param_1 + 0x38);
  if (uVar1 == uVar7) {
                    /* try { // try from 00536afc to 00536aff has its CatchHandler @ 00536b60 */
    FUN_0053a50c(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x40);
    uVar7 = *(long *)(param_1 + 0x38) + lVar3;
    lVar4 = *(long *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x28);
  }
  if (lVar6 == lVar4) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)
             (*(long *)(lVar4 + (uVar7 >> 5 & 0x7fffffffffffff8)) + (uVar7 & 0xff) * 0x10);
  }
  uVar2 = *param_2;
  *(undefined8 *)(puVar5 + 2) = 0;
  *puVar5 = uVar2;
  *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(long *)(param_1 + 0x40) = lVar3 + 1;
                    /* try { // try from 00536b4c to 00536b53 has its CatchHandler @ 00536b78 */
  FUN_002ef790(param_1 + 0x48);
  return;
}


