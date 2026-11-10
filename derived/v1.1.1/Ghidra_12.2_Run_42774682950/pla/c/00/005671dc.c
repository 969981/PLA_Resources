/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005671dc; name: FUN_005671dc
 */


void FUN_005671dc(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar5;
  undefined8 *puVar4;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [264];
  
  *param_1 = (long)(PTR_DAT_04374d90 + 0x10);
  if (param_1[6] != 0) {
                    /* try { // try from 005672cc to 005672e3 has its CatchHandler @ 00567304 */
    FUN_0054f038(auStack_140,"external/com_github_google_re2\\re2/walker-inl.h",0x95);
                    /* try { // try from 005672e8 to 005672f3 has its CatchHandler @ 005672fc */
    FUN_00551750(auStack_138,"Stack not empty.");
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(auStack_140);
  }
  puVar4 = (undefined8 *)param_1[2];
  puVar1 = (undefined8 *)param_1[3];
  param_1[6] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    operator_delete((void *)*puVar4);
    puVar1 = (undefined8 *)param_1[3];
    puVar4 = (undefined8 *)(param_1[2] + 8);
    param_1[2] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x2a;
  }
  else {
    if (uVar2 != 2) goto LAB_00567264;
    lVar3 = 0x55;
  }
  param_1[5] = lVar3;
LAB_00567264:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      operator_delete((void *)*puVar4);
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
    lVar3 = param_1[3] - param_1[2];
    if (lVar3 != 0) {
      param_1[3] = param_1[3] + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if ((void *)param_1[1] == (void *)0x0) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


