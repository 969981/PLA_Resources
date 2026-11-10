/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008772c0; name: FUN_008772c0
 */


void FUN_008772c0(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  byte bVar1;
  ulong uVar2;
  undefined1 auStack_80 [64];
  
  (**(code **)PTR_DAT_04378470)(auStack_80);
  (**(code **)PTR_DAT_04378478)(auStack_80,*param_2);
  (**(code **)PTR_DAT_04378480)(auStack_80,*param_4,param_5,*param_3);
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (**(code **)PTR_DAT_04378488)(param_1 + 0x10,auStack_80);
  uVar2 = (**(code **)PTR_DAT_04378490)(*param_4);
  bVar1 = param_1[1] & 0xfc;
  if ((uVar2 & 4) != 0) {
    bVar1 = param_1[1] | 2;
  }
  param_1[1] = bVar1 & 0xfe;
  *param_1 = 1;
  return;
}


