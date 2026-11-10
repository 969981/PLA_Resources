/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02768f18; name: FUN_02768f18
 */


void FUN_02768f18(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  plVar2 = (long *)(param_1 + 0x90);
  pcVar1 = (code *)*plVar2;
  if (pcVar1 != (code *)0x0) {
    uStack_60 = *(undefined8 *)(param_1 + 8);
    local_68 = 0;
    local_48 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0xaaaaaaaaaaaaaaa;
    uStack_50 = 0;
    if (param_2[1] != *param_2) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        FUN_027640dc(&local_78,*(long *)(param_1 + 0x38) + lVar3);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (uVar4 < (ulong)(param_2[1] - *param_2 >> 4));
      pcVar1 = (code *)*plVar2;
    }
    (*pcVar1)(param_1 + 0xb0,&local_78);
    pcVar1 = *(code **)(param_1 + 0x98);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *plVar2 = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      (*pcVar1)(param_1 + 0xb0);
    }
    FUN_02763dac(&local_78);
  }
  return;
}


