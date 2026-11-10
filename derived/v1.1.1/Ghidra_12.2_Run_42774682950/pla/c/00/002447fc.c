/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002447fc; name: FUN_002447fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002447fc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  (**(code **)(*param_1 + 0x60))(param_1,&local_28);
  (**(code **)(*param_1 + 0x68))(param_1,&local_30);
  uVar4 = _UNK_0388a138;
  uVar3 = _DAT_0388a130;
  uVar2 = _UNK_038899f8;
  uVar1 = _DAT_038899f0;
  fVar5 = 1.0 / ((local_30 + local_28) - local_30);
  fVar6 = 1.0 / ((fStack_2c - fStack_24) - fStack_2c);
  param_2[1] = (ulong)(uint)-((local_30 + local_30 + local_28) * fVar5) << 0x20;
  *param_2 = (ulong)(uint)(fVar5 + fVar5);
  param_2[3] = (ulong)(uint)-((fStack_2c + (fStack_2c - fStack_24)) * fVar6) << 0x20;
  param_2[2] = (ulong)(uint)(fVar6 + fVar6) << 0x20;
  param_2[5] = uVar2;
  param_2[4] = uVar1;
  param_2[7] = uVar4;
  param_2[6] = uVar3;
  return;
}


