/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037ad74; name: FUN_0037ad74
 */


undefined8 FUN_0037ad74(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  do {
    uStack_60 = 0;
    local_58 = 0;
    local_68 = 0x3e02;
    bVar3 = *(byte *)(param_1 + 0x30);
    uVar5 = (ulong)(bVar3 >> 1);
    uVar8 = uVar5;
    if ((bVar3 & 1) != 0) {
      uVar8 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar8 == 1) {
      if ((bVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '>') {
          pcVar6 = (char *)((ulong)&local_68 | 2);
          pcVar7 = (char *)(param_1 + 0x32);
          uVar8 = uVar5;
          do {
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_0037aeb4;
            cVar1 = *pcVar6;
            cVar2 = *pcVar7;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 == cVar1);
        }
      }
      else if (**(char **)(param_1 + 0x40) == '>') goto LAB_0037aeb4;
      uStack_78 = 0;
      local_70 = 0;
      local_80 = 0x7d02;
      if ((bVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '}') {
          pcVar6 = (char *)((ulong)&local_80 | 2);
          pcVar7 = (char *)(param_1 + 0x32);
          do {
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) goto LAB_0037aeb4;
            cVar1 = *pcVar6;
            cVar2 = *pcVar7;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 == cVar1);
        }
      }
      else if (**(char **)(param_1 + 0x40) == '}') {
LAB_0037aeb4:
        uVar4 = FUN_003780a4(param_1,param_3);
        return uVar4;
      }
    }
    local_80 = 0x7d02;
    local_70 = 0;
    uStack_78 = 0;
    uVar8 = FUN_00375a58(param_1,param_2);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  } while( true );
}


