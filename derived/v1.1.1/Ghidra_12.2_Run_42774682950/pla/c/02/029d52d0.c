/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d52d0; name: FUN_029d52d0
 */


void FUN_029d52d0(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 local_68;
  long lStack_60;
  undefined4 local_58;
  undefined1 local_54;
  char local_48 [4];
  undefined4 local_44;
  
  *(undefined1 *)((long)param_5 + 0x5c) = 0;
  if (*(char *)((long)param_5 + 0x5a) != '\0') {
    lVar5 = *param_5;
    *(undefined1 *)((long)param_5 + 0x5c) = 1;
    if (lVar5 != 0) {
      if (*(char *)((long)param_5 + 0x5a) != '\x01') {
LAB_029d53f8:
        local_58 = *param_2;
        local_54 = 1;
        local_70 = param_3;
        local_68 = param_4;
        lStack_60 = lVar5;
        FUN_02a09008(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1c80),local_48,&local_70);
        uVar3 = (ulong)*(byte *)((long)param_5 + 0x5a);
        if (local_48[0] == '\0') {
          if (*(byte *)((long)param_5 + 0x5a) == 0) {
            return;
          }
          uVar4 = 0;
          do {
            if (param_5[uVar4] == lVar5) goto LAB_029d5464;
            uVar4 = uVar4 + 1;
          } while (uVar3 != uVar4);
        }
        goto LAB_029d5484;
      }
LAB_029d5328:
      local_58 = *param_2;
      local_54 = 1;
      local_70 = param_3;
      local_68 = param_4;
      lStack_60 = lVar5;
      FUN_02a09008(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1c80),local_48,&local_70);
      if (local_48[0] == '\0') {
        FUN_029d54bc(param_1,param_4,lVar5,param_3,*param_2,local_44);
        uVar3 = (ulong)*(byte *)((long)param_5 + 0x5a);
        if (uVar3 == 0) {
          return;
        }
        uVar4 = 0;
        do {
          if (param_5[uVar4] == lVar5) goto LAB_029d53b8;
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
      }
      else {
        uVar3 = (ulong)*(byte *)((long)param_5 + 0x5a);
      }
      goto LAB_029d53d8;
    }
  }
  return;
LAB_029d5464:
  for (; (int)uVar4 + 1U < (uint)uVar3; uVar4 = uVar4 + 1) {
    param_5[uVar4] = (param_5 + uVar4)[1];
    uVar3 = (ulong)*(byte *)((long)param_5 + 0x5a);
  }
  uVar2 = (uint)uVar3 - 1;
  uVar3 = (ulong)uVar2;
  *(char *)((long)param_5 + 0x5a) = (char)uVar2;
  *(char *)((long)param_5 + 0x5c) = *(char *)((long)param_5 + 0x5c) + -1;
LAB_029d5484:
  bVar1 = *(byte *)((long)param_5 + 0x5c);
  if (((uint)uVar3 & 0xff) <= (uint)bVar1) {
    return;
  }
  *(byte *)((long)param_5 + 0x5c) = bVar1 + 1;
  lVar5 = param_5[bVar1];
  if (lVar5 == 0) {
    return;
  }
  goto LAB_029d53f8;
LAB_029d53b8:
  for (; (int)uVar4 + 1U < (uint)uVar3; uVar4 = uVar4 + 1) {
    param_5[uVar4] = (param_5 + uVar4)[1];
    uVar3 = (ulong)*(byte *)((long)param_5 + 0x5a);
  }
  uVar2 = (uint)uVar3 - 1;
  uVar3 = (ulong)uVar2;
  *(char *)((long)param_5 + 0x5a) = (char)uVar2;
  *(char *)((long)param_5 + 0x5c) = *(char *)((long)param_5 + 0x5c) + -1;
LAB_029d53d8:
  bVar1 = *(byte *)((long)param_5 + 0x5c);
  if (((uint)uVar3 & 0xff) <= (uint)bVar1) {
    return;
  }
  *(byte *)((long)param_5 + 0x5c) = bVar1 + 1;
  lVar5 = param_5[bVar1];
  if (lVar5 == 0) {
    return;
  }
  goto LAB_029d5328;
}


