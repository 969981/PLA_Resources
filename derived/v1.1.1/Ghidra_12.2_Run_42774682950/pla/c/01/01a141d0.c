/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a141d0; name: FUN_01a141d0
 */


void FUN_01a141d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  
  uVar5 = param_2[2];
  uVar1 = param_2[3];
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  uVar5 = param_2[5];
  uVar1 = param_2[6];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  param_1[5] = uVar5;
  param_1[6] = uVar1;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = param_2[10];
  uVar1 = param_2[0xb];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  param_1[0xb] = uVar1;
  FUN_00b63974(param_1 + 0xd,param_2 + 0xd);
  FUN_00cfa028(param_1 + 0xf,param_2 + 0xf);
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  plVar6 = (long *)param_2[0x14];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x14];
  param_1[0x14] = plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  uVar5 = param_2[0x1d];
  uVar3 = *(undefined4 *)(param_2 + 0x1e);
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1d] = uVar5;
  uVar5 = param_2[0x19];
  param_1[0x17] = param_2[0x17];
  param_1[0x19] = uVar5;
  param_1[0x16] = param_2[0x16];
  uVar5 = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x18] = uVar5;
  uVar5 = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x1e) = uVar3;
  param_1[0x1c] = uVar5;
  FUN_00b63974(param_1 + 0x1f,param_2 + 0x1f);
  FUN_00cfa028(param_1 + 0x21,param_2 + 0x21);
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  plVar6 = (long *)param_2[0x26];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x26];
  param_1[0x26] = plVar6;
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a14318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))();
  return;
}


