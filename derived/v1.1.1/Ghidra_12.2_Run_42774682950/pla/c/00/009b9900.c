/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b9900; name: FUN_009b9900
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 * FUN_009b9900(undefined8 param_1,long *param_2)

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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x890,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN_01d9037c(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_01d9037c();
  puVar4[0x104] = 0;
  puVar4[0x105] = 0;
  puVar4[9] = &PTR_LAB_04251a28;
  puVar4[10] = &PTR_LAB_04251a70;
  puVar4[0x24] = &PTR_LAB_04251a98;
  puVar4[0x106] = 0;
  puVar4[0x107] = 0;
  puVar4[0x108] = 0;
  puVar4[0x109] = 0;
  puVar4[0x10a] = 0;
  puVar4[0x10b] = 0;
  puVar4[0x10c] = 0;
  puVar4[0x10d] = 0;
  puVar4[0x10e] = 0;
  puVar4[0x10f] = 0;
  *(undefined4 *)(puVar4 + 0x110) = 0;
  *puVar4 = &PTR_LAB_04251960;
  puVar4[1] = param_2;
  puVar4[2] = puVar4;
  puVar4[3] = 0x890;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


