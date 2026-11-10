/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a63b0; name: FUN_027a63b0
 */


undefined8 FUN_027a63b0(void *param_1,ulong param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_5f8 [712];
  undefined1 auStack_330 [708];
  short local_6c;
  
  if (param_2 % 0x2c8 == 0) {
    uVar3 = 1;
    if (0x2c7 < param_2) {
      uVar4 = 0;
      do {
        memcpy(auStack_330,param_1,0x2c8);
        sVar1 = local_6c;
        local_6c = 0;
        sVar2 = FUN_027a64cc(auStack_330);
        if (sVar1 != sVar2) goto LAB_027a63f8;
        local_6c = sVar1;
        memcpy(auStack_5f8,auStack_330,0x2c8);
        if ((code *)*param_3 != (code *)0x0) {
          (*(code *)*param_3)(param_3 + 4,auStack_5f8);
        }
        uVar4 = uVar4 + 1;
        param_1 = (void *)((long)param_1 + 0x2c8);
      } while (uVar4 < param_2 / 0x2c8);
      uVar3 = 1;
    }
  }
  else {
LAB_027a63f8:
    uVar3 = 0;
  }
  return uVar3;
}


