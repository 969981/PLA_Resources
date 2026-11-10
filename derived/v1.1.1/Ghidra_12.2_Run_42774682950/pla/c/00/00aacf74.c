/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aacf74; name: FUN_00aacf74
 */


void FUN_00aacf74(int param_1,char *param_2,undefined8 param_3,uint *param_4,
                 undefined1 (*param_5) [16])

{
  undefined4 uVar1;
  uint uVar4;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar5 [12];
  undefined8 uVar6;
  float local_18;
  float fStack_14;
  
  if (param_1 == 1) {
    uVar1 = *(undefined4 *)*param_5;
    uVar4 = *param_4;
    *(undefined4 *)(*param_5 + 8) = *(undefined4 *)(*param_5 + 8);
    *(undefined4 *)(*param_5 + 0xc) = *(undefined4 *)(*param_5 + 0xc);
    *(ulong *)*param_5 = CONCAT44(uVar4,uVar1);
  }
  else {
    if (param_1 == 2) {
      uVar6 = *(undefined8 *)*param_5;
      auVar5._8_4_ = *param_4;
      auVar5._0_8_ = uVar6;
      *(ulong *)(*param_5 + 8) = (ulong)auVar5._8_4_;
      *(undefined8 *)*param_5 = uVar6;
      if (*param_2 == '\0') {
        return;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar5._4_8_;
      auVar3 = auVar3 << 0x20;
    }
    else {
      auVar2._4_12_ = SUB1612(*param_5,4);
      auVar2._0_4_ = *param_4;
      *(long *)(*param_5 + 8) = SUB168(*param_5,8);
      *(long *)*param_5 = auVar2._0_8_;
      if (*param_2 == '\0') {
        return;
      }
      auVar3 = NEON_ext(ZEXT816(0),auVar2,8,1);
      auVar3 = NEON_ext(auVar3,auVar3,8,1);
    }
    *(long *)(*param_5 + 8) = auVar3._8_8_;
    *(long *)*param_5 = auVar3._0_8_;
    if (*param_2 != '\0') {
      FUN_00aad060(&fStack_14,&local_18);
      uVar6 = *(undefined8 *)*param_5;
      *(ulong *)(*param_5 + 8) = (ulong)(uint)(local_18 * auVar3._8_4_ + fStack_14 * auVar3._0_4_);
      *(ulong *)*param_5 =
           CONCAT44((int)((ulong)uVar6 >> 0x20),local_18 * auVar3._0_4_ - fStack_14 * auVar3._8_4_);
    }
  }
  return;
}


