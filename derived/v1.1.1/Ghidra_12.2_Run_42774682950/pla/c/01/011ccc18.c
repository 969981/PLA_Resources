/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ccc18; name: FUN_011ccc18
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 * FUN_011ccc18(undefined8 param_1,long *param_2)

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
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x268,8);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN_011ccdd0(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_011ccdd0();
  puVar4[0x46] = 0;
  puVar4[9] = &PTR_LAB_0420fe00;
  *puVar4 = &PTR_LAB_0420fda8;
  puVar4[1] = param_2;
  puVar4[0x1f] = 0;
  puVar4[0x20] = &DAT_cbf29ce484222645;
  puVar4[0x47] = &DAT_cbf29ce484222645;
  puVar4[0x45] = 0;
  puVar4[0x44] = 0;
  puVar4[0x43] = 0;
  puVar4[0x42] = 0;
  puVar4[0x4a] = 0;
  puVar4[0x49] = 0;
  puVar4[0x4b] = 0;
  puVar4[0x23] = 0;
  puVar4[0x24] = &DAT_cbf29ce484222645;
  puVar4[0x27] = 0;
  puVar4[0x28] = &DAT_cbf29ce484222645;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = &DAT_cbf29ce484222645;
  puVar4[0x2f] = 0;
  puVar4[0x30] = &DAT_cbf29ce484222645;
  puVar4[0x33] = 0;
  puVar4[0x34] = &DAT_cbf29ce484222645;
  puVar4[0x37] = 0;
  puVar4[0x38] = &DAT_cbf29ce484222645;
  puVar4[0x3b] = 0;
  puVar4[0x3c] = &DAT_cbf29ce484222645;
  puVar4[0x3f] = 0;
  puVar4[0x40] = &DAT_cbf29ce484222645;
  puVar4[0x41] = &DAT_03996322;
  puVar4[0x48] = &DAT_03996322;
  puVar4[0x21] = &DAT_03996322;
  puVar4[0x22] = 0;
  puVar4[0x25] = &DAT_03996322;
  puVar4[0x26] = 0;
  puVar4[0x29] = &DAT_03996322;
  puVar4[0x2a] = 0;
  puVar4[0x2d] = &DAT_03996322;
  puVar4[0x2e] = 0;
  puVar4[0x31] = &DAT_03996322;
  puVar4[0x32] = 0;
  puVar4[0x35] = &DAT_03996322;
  puVar4[0x36] = 0;
  puVar4[0x39] = &DAT_03996322;
  puVar4[0x3a] = 0;
  puVar4[0x3d] = &DAT_03996322;
  puVar4[0x3e] = 0;
  *(undefined2 *)(puVar4 + 0x4c) = 1;
  puVar4[2] = puVar4;
  puVar4[3] = 0x268;
  puVar4[4] = 8;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


