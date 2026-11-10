/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3afbc; name: FUN_01a3afbc
 */


void FUN_01a3afbc(long *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  void *__dest;
  uint uVar5;
  code *pcVar6;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar3 = (**(code **)(*param_1 + 0xf8))();
  if ((uVar3 & 1) != 0) goto LAB_01a3afe4;
  if ((code *)param_1[0x3e] == (code *)0x0) goto LAB_01a3afec;
  uVar3 = (*(code *)param_1[0x3e])(param_1 + 0x42);
  if ((uVar3 & 1) == 0) goto LAB_01a3afec;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  pcVar6 = (code *)param_1[0x3f];
  if (pcVar6 != (code *)0x0) {
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    (*pcVar6)(param_1 + 0x42);
  }
  if ((code *)param_1[0x4e] == (code *)0x0) {
LAB_01a3afe4:
    cVar1 = *(char *)((long)param_1 + 0x3e1);
  }
  else {
    (*(code *)param_1[0x4e])(param_1 + 0x52);
    pcVar6 = (code *)param_1[0x4f];
    if (pcVar6 == (code *)0x0) goto LAB_01a3afe4;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    (*pcVar6)(param_1 + 0x52);
    cVar1 = *(char *)((long)param_1 + 0x3e1);
  }
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x108))(param_1,&local_30);
  }
LAB_01a3afec:
  (**(code **)(*param_1 + 0x90))(param_1,&local_30);
  lVar4 = FUN_01a4b9b4(param_1);
  if (lVar4 != 0) {
    FUN_02a93a48();
    uVar3 = *(ulong *)(lVar4 + 0x218);
    uVar5 = (uint)(uVar3 >> 0x20);
    if ((uVar5 < (uint)((ulong)(*(long *)(DAT_043ef5a8 + 0x108) - *(long *)(DAT_043ef5a8 + 0x100))
                       >> 2)) &&
       (iVar2 = *(int *)(*(long *)(DAT_043ef5a8 + 0x100) + (uVar3 >> 0x20) * 4), -1 < iVar2)) {
      __dest = *(void **)(*(long *)(DAT_043ef5a8 + 0x60) + (long)iVar2 * 0x20);
      if (((uVar3 & 0xff) == 0) || (*(char *)((long)__dest + 0xd0) == '\0')) {
        if (*(char *)((long)__dest + 0xd0) != '\0' || (uVar3 & 0xff) != 0) {
          return;
        }
      }
      else if (*(uint *)((long)__dest + 0xd4) != uVar5) {
        return;
      }
      memcpy(__dest,(void *)(lVar4 + 0x220),0xd0);
    }
  }
  return;
}


