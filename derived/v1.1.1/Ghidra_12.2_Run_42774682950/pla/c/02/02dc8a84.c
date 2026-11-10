/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc8a84; name: FUN_02dc8a84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02dc8a84(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x70,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    param_2 = (long *)0x0;
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *(undefined1 *)(puVar4 + 2) = 1;
    uVar7 = _UNK_03888d28;
    uVar6 = _DAT_03888d20;
    *(undefined4 *)((long)puVar4 + 0x14) = 0x3f800000;
    *(undefined8 *)((long)puVar4 + 0x34) = 0x40490fdb40490fdb;
    puVar4[8] = 0x40490fdb40490fdb;
    puVar4[9] = 0x40490fdb40490fdb;
    puVar4[5] = uVar7;
    puVar4[4] = uVar6;
    uVar1 = _UNK_03889fd8;
    uVar6 = _DAT_03889fd0;
    *puVar4 = &PTR_LAB_0429a610;
    puVar4[1] = param_2;
    *(undefined1 *)(puVar4 + 6) = 0;
    *(undefined1 *)((long)puVar4 + 0x3c) = 0;
    puVar4[10] = 0;
    uVar7 = 0x70;
    puVar4[0xd] = uVar1;
    puVar4[0xc] = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    uVar6 = 0x10;
  }
  *param_1 = puVar4;
  param_1[1] = param_2;
  param_1[2] = uVar7;
  param_1[3] = uVar6;
  return;
}


