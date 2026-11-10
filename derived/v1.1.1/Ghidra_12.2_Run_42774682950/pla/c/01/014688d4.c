/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014688d4; name: FUN_014688d4
 */


void FUN_014688d4(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  uint uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  uint *local_80;
  uint *local_78;
  long local_70;
  long *plStack_68;
  char local_48 [5];
  undefined1 local_43;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar4 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar4;
  if ((lVar4 != 0) && (FUN_02785bd0(local_48), local_48[0] != '\0')) {
    FUN_027908f8(&local_80,lVar4,*(undefined8 *)(param_1 + 8),local_43);
    puVar3 = local_80;
    if (local_80 != local_78) {
      do {
        if (*puVar3 == (param_2 & 0xffff)) {
          if ((local_78 != puVar3) && (uVar2 = FUN_0278b7ec(lVar4,puVar3), (uVar2 & 1) != 0)) {
            DAT_04211978 = *(undefined8 *)puVar3;
            DAT_04211980 = *(undefined8 *)(puVar3 + 2);
            DAT_04211988 = *(undefined8 *)(puVar3 + 4);
            DAT_04211990 = *(undefined8 *)(puVar3 + 6);
            DAT_04211998 = *(undefined8 *)(puVar3 + 8);
            DAT_042119a0 = *(undefined8 *)(puVar3 + 10);
            DAT_042119a8 = *(undefined8 *)(puVar3 + 0xc);
            DAT_042119b0 = *(undefined8 *)(puVar3 + 0xe);
            DAT_042119b8 = *(undefined8 *)(puVar3 + 0x10);
            DAT_042119c0 = *(undefined8 *)(puVar3 + 0x12);
            DAT_042119c8 = *(undefined8 *)(puVar3 + 0x14);
            DAT_042119d0 = *(undefined8 *)(puVar3 + 0x16);
            DAT_042119d8 = *(undefined8 *)(puVar3 + 0x18);
            DAT_042119e0 = *(undefined8 *)(puVar3 + 0x1a);
            DAT_042119e8 = *(undefined8 *)(puVar3 + 0x1c);
            local_88 = 0;
            local_a8[0] = 4;
            local_a4 = 0;
            local_98 = &DAT_042119d0;
            uStack_90 = 0;
            uStack_a0 = param_2 & 0xffff;
            FUN_01468dd0(param_1,local_a8);
          }
          break;
        }
        puVar3 = puVar3 + 0x1e;
      } while (local_78 != puVar3);
      puVar3 = local_80;
    }
    if (puVar3 != (uint *)0x0) {
      uVar2 = (**(code **)(*plStack_68 + 0xc0))(plStack_68);
      if ((uVar2 & 1) != 0) {
        lVar4 = tpidr_el0;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plStack_68,puVar3,local_70 - (long)puVar3,4);
          return;
        }
      }
      (**(code **)(*plStack_68 + 0x18))(plStack_68,puVar3,local_70 - (long)puVar3,4);
    }
  }
  return;
}


