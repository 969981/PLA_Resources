/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01241758; name: FUN_01241758
 */


undefined8 * FUN_01241758(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x14d0,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar4,*param_2,*param_3,*param_4);
  puVar4[0xb7] = 0x100000000;
  *puVar4 = &PTR_LAB_041fe720;
  puVar4[0xb6] = 0;
  puVar4[9] = &PTR_LAB_041fe7c8;
  puVar4[10] = &PTR_LAB_041fe810;
  FUN_0124062c(puVar4 + 0xb8);
  puVar4[0xb8] = PTR_DAT_0437e990 + 0x10;
  FUN_01233a1c(puVar4 + 0x138);
  puVar4[0x24d] = 0;
  puVar1 = PTR_DAT_0437e998;
  puVar4[0x24e] = 0;
  puVar4[0x138] = puVar1 + 0x10;
  puVar4[0x24f] = 0;
  puVar4[0x250] = 0;
  FUN_01241168(puVar4 + 0x251);
  *(undefined1 *)(puVar4 + 0x255) = 0;
  *(undefined4 *)((long)puVar4 + 0x1334) = 0;
  puVar4[0x268] = 0;
  puVar4[0x269] = 0;
  puVar4[0x26a] = 0;
  puVar4[0x26b] = 0;
  puVar4[0x278] = 0;
  puVar4[0x279] = 0;
  puVar4[0x27a] = 0;
  puVar4[0x27b] = 0;
  puVar4[0x288] = 0;
  puVar4[0x289] = 0;
  puVar4[0x28a] = 0;
  puVar4[0x28b] = 0;
  *(undefined4 *)(puVar4 + 0x298) = 0;
  puVar4[0x299] = 0;
  *(undefined1 *)(puVar4 + 0x266) = 0;
  puVar4[0x256] = 0;
  puVar4[599] = 0;
  puVar4[600] = 0;
  puVar4[0x259] = 0;
  puVar4[0x25a] = 0;
  puVar4[0x25b] = 0;
  puVar4[0x25c] = 0;
  puVar4[0x25d] = 0;
  puVar4[0x25e] = 0;
  puVar4[0x25f] = 0;
  puVar4[0x260] = 0;
  puVar4[0x261] = 0;
  puVar4[0x262] = 0;
  puVar4[0x263] = 0;
  puVar4[0x264] = 0;
  puVar4[0x265] = 0;
  puVar4[1] = param_1;
  puVar4[2] = puVar4;
  puVar4[3] = 0x14d0;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


