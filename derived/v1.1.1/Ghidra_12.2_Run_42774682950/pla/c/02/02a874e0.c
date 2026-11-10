/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a874e0; name: FUN_02a874e0
 */


undefined8 * FUN_02a874e0(locale *param_1,byte param_2)

{
  undefined8 uVar1;
  locale lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  byte local_68 [8];
  ulong local_60;
  long local_58;
  locale alStack_48 [8];
  
  plVar4 = DAT_043f1798;
  lVar3 = tpidr_el0;
  plVar10 = *(long **)(lVar3 + 0x20);
  if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
    *(long **)(lVar3 + 0x20) = DAT_043f1798;
    plVar10 = plVar4;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0xa8,8);
  lVar2 = param_1[0x18];
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  *puVar8 = &PTR_FUN_0427f448;
  puVar8[1] = uVar11;
  std::locale::locale((locale *)(puVar8 + 2),param_1);
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[0x13] = 0;
  *(undefined4 *)(puVar8 + 0x14) = 0;
  *(byte *)((long)puVar8 + 0xa4) = param_2 & 1;
  *(byte *)((long)puVar8 + 0xa5) = (byte)lVar2 & 1;
  *(byte *)((long)puVar8 + 0xa6) = (byte)lVar2 >> 3 & 1;
  puVar8[3] = uVar11;
  puVar8[4] = uVar1;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  std::locale::locale(alStack_48,(locale *)(puVar8 + 2));
  std::locale::name();
  uVar9 = (ulong)(local_68[0] >> 1);
  if ((local_68[0] & 1) != 0) {
    uVar9 = local_60;
  }
  if (uVar9 == 1) {
    iVar7 = std::string::compare((ulong)local_68,0,(char *)0xffffffffffffffff,0x38bd99e);
    bVar6 = iVar7 != 0;
    plVar4 = DAT_043f1798;
    lVar5 = local_58;
  }
  else {
    bVar6 = true;
    plVar4 = DAT_043f1798;
    lVar5 = local_58;
  }
  DAT_043f1798 = plVar4;
  if (((local_68[0] & 1) != 0) && (lVar5 != 0)) {
    plVar10 = *(long **)(lVar3 + 0x20);
    if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
      *(long **)(lVar3 + 0x20) = plVar4;
      plVar10 = plVar4;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar5,0,8);
        goto LAB_02a876e4;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar5,0,8);
  }
LAB_02a876e4:
  std::locale::~locale(alStack_48);
  *(bool *)((long)puVar8 + 0xa7) = bVar6;
  *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar8;
  *(undefined8 **)(param_1 + 0x38) = puVar8;
  return puVar8;
}


