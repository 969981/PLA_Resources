/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2e33c; name: FUN_02c2e33c
 */


undefined2 FUN_02c2e33c(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  void *__dest;
  ulong uVar5;
  ushort *puVar6;
  long lVar7;
  long *plVar8;
  size_t __n;
  uint *puVar9;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = *(ushort **)(param_1 + 0x90);
  if (puVar6[1] <= param_2) {
    if (*(char *)(param_3 + 0x7c) == '\0') {
      return 0;
    }
    **(undefined2 **)(param_3 + 0x58) = 0;
    *(undefined2 *)(param_3 + 0x7a) = 0;
    return 0;
  }
  uVar1 = DAT_043f21e0 & 0xff;
  if (*puVar6 <= DAT_043f21e0) {
    uVar1 = 0;
  }
  if ((*(uint *)(param_1 + 0x88) != uVar1) &&
     (*(uint *)(param_1 + 0x88) = uVar1, *(int *)(param_1 + 0x54) != 0)) {
    FUN_02c2df98(param_1,param_1 + 0x98,puVar6,param_1 + 0x58);
  }
  puVar4 = PTR_DAT_0437a508;
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x88) * 4 + 0xc);
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = PTR_DAT_0437a508 + 0x10;
    local_88 = 0;
    puVar9 = (uint *)(param_1 + 0xa0);
    FUN_00938764(&local_90,0,param_1 + 0x58,0,*(undefined8 *)(param_1 + 8),0);
    if ((local_88 != 0) && (*(long *)(local_88 + 0x240) != 0)) {
      *(undefined8 *)puVar9 =
           *(undefined8 *)(*(long *)(local_88 + 0x250) + (ulong)(iVar2 + (param_2 << 3 | 4)));
    }
    FUN_00936104(&local_90);
    if (*(int *)(param_1 + 0x54) == 0) {
      __n = (ulong)*(ushort *)(param_1 + 0xa4) << 1;
      __dest = (void *)(**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),__n,8)
      ;
      if (__dest != (void *)0x0) {
        iVar2 = *(int *)(*(long *)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x88) * 4 + 0xc);
        local_90 = puVar4 + 0x10;
        iVar3 = *(int *)(param_1 + 0xa0);
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_88 = 0;
        FUN_00938764(&local_90,0,param_1 + 0x58,0,*(undefined8 *)(param_1 + 8),0);
        if ((local_88 != 0) && (*(long *)(local_88 + 0x240) != 0)) {
          memcpy(__dest,(void *)(*(long *)(local_88 + 0x250) + (ulong)(uint)(iVar3 + iVar2)),__n);
        }
        FUN_00936104(&local_90);
        FUN_02c2e654(param_1,__dest,*(undefined2 *)(param_1 + 0xa4),param_2,param_3);
        plVar8 = *(long **)(param_1 + 8);
        uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar5 & 1) != 0) {
          lVar7 = tpidr_el0;
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar8,__dest,__n,8);
            goto LAB_02c2e490;
          }
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,__dest,__n,8);
      }
      goto LAB_02c2e490;
    }
    lVar7 = *(long *)(param_1 + 0x98);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x98);
    puVar9 = (uint *)(lVar7 + (ulong)param_2 * 8 + 4);
  }
  FUN_02c2e654(param_1,lVar7 + (ulong)*puVar9,(short)puVar9[1],param_2,param_3);
LAB_02c2e490:
  return *(undefined2 *)((long)puVar9 + 6);
}


