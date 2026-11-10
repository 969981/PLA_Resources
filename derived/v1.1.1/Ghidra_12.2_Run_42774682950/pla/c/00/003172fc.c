/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003172fc; name: FUN_003172fc
 */


void FUN_003172fc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  long *local_d8;
  byte local_d0;
  undefined8 local_c0;
  int local_b8;
  undefined1 auStack_a0 [8];
  long *local_98;
  byte local_90 [16];
  undefined8 local_80;
  int local_78;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
                    /* try { // try from 00317330 to 00317343 has its CatchHandler @ 0031759c */
  FUN_0038e180(auStack_a0,param_3,param_2);
  puVar1 = PTR_LAB_04373088;
  while( true ) {
                    /* try { // try from 00317378 to 0031738b has its CatchHandler @ 003175c0 */
    FUN_0038e2b4(auStack_e0,param_3,param_2,param_4);
                    /* try { // try from 00317398 to 003173a3 has its CatchHandler @ 003175c4 */
    uVar2 = (**(code **)(*local_98 + 0x28))(local_98,auStack_a0,auStack_e0);
                    /* try { // try from 003173b4 to 003173bb has its CatchHandler @ 00317604 */
    (**(code **)(*local_d8 + 0x80))(local_d8,auStack_e0);
    if ((local_b8 == 9) && ((local_d0 & 1) != 0)) {
      FUN_002e2ea0(puVar1,local_c0);
    }
    if ((uVar2 & 1) != 0) break;
    lVar6 = param_1[1];
    if (lVar6 == param_1[2]) {
      lVar6 = lVar6 - *param_1 >> 5;
      uVar2 = lVar6 + 1;
      if (uVar2 >> 0x3b != 0) {
                    /* try { // try from 0031756c to 00317573 has its CatchHandler @ 00317574 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar4 = param_1[2] - *param_1;
      if ((ulong)(lVar4 >> 5) < 0x3ffffffffffffff) {
        uVar5 = lVar4 >> 4;
        if (uVar2 <= uVar5) {
          uVar2 = uVar5;
        }
      }
      else {
        uVar2 = 0x7ffffffffffffff;
      }
      lVar3 = FUN_002e2e80(PTR_FUN_04373078,uVar2 * 0x20);
      lVar4 = lVar3 + lVar6 * 0x20;
      *(undefined4 *)(lVar4 + 0x18) = 0;
                    /* try { // try from 00317464 to 0031746f has its CatchHandler @ 003175ac */
      FUN_0031a934(lVar4,local_90);
      lVar8 = *param_1;
      lVar7 = param_1[1];
      lVar6 = lVar4 + 0x20;
      if (lVar7 == lVar8) {
        lVar7 = lVar8;
      }
      else {
        do {
          lVar7 = lVar7 + -0x20;
          *(undefined4 *)(lVar4 + -8) = 0;
                    /* try { // try from 0031748c to 00317493 has its CatchHandler @ 00317620 */
          FUN_0031a934(lVar4 + -0x20,lVar7);
          lVar4 = lVar4 + -0x20;
        } while (lVar8 != lVar7);
        lVar8 = param_1[1];
        lVar7 = *param_1;
      }
      param_1[2] = lVar3 + uVar2 * 0x20;
      *param_1 = lVar4;
      param_1[1] = lVar6;
      while (lVar6 = lVar8, lVar6 != lVar7) {
        lVar8 = lVar6 + -0x20;
        if ((*(int *)(lVar6 + -8) == 9) && ((*(byte *)(lVar6 + -0x20) & 1) != 0)) {
          FUN_002e2ea0(puVar1,*(undefined8 *)(lVar6 + -0x10));
        }
      }
      if (lVar7 != 0) {
        FUN_002e2ea0(puVar1,lVar7);
      }
    }
    else {
      *(undefined4 *)(lVar6 + 0x18) = 0;
                    /* try { // try from 003173f0 to 003173f7 has its CatchHandler @ 00317618 */
      FUN_0031a934(lVar6,local_90);
      param_1[1] = param_1[1] + 0x20;
    }
                    /* try { // try from 00317370 to 00317377 has its CatchHandler @ 00317618 */
    (**(code **)(*local_98 + 0x90))(local_98,auStack_a0);
  }
                    /* try { // try from 00317514 to 0031751b has its CatchHandler @ 00317588 */
  (**(code **)(*local_98 + 0x80))(local_98,auStack_a0);
  if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
                    /* try { // try from 00317544 to 0031754b has its CatchHandler @ 00317578 */
  FUN_0031ab80(*param_1,param_1[1],auStack_a0);
  return;
}


