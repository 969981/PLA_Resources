/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00666118; name: FUN_00666118
 */


void FUN_00666118(byte *param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined **local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar6 = *param_2;
  if (*(char *)(lVar6 + 0x38) == '\0') {
    local_40 = (undefined **)0x0;
    uStack_38 = 0;
    puVar1 = PTR_DAT_04373168 + 0x10;
    puStack_a0 = PTR_DAT_04373170 + 0x10;
    local_98 = &local_98;
    local_a8 = puVar1;
    pppuStack_90 = local_98;
    (**(code **)(**(long **)(lVar6 + 0x20) + 0x10))(*(long **)(lVar6 + 0x20),auStack_80);
    local_40 = &puStack_a0;
    thunk_FUN_00783af0(&local_a8);
    local_a8 = puVar1;
    FUN_00782f18(&puStack_a0);
    pcVar3 = (char *)(**(code **)(**(long **)(lVar6 + 0x20) + 0x38))();
    if (*pcVar3 == '\0') {
      if (*(char *)(lVar6 + 0x50) == '\0') {
        *(undefined1 *)(lVar6 + 0x50) = 1;
        plVar4 = *(long **)(*(long *)(lVar6 + 0x30) + 0x20);
                    /* try { // try from 006662ac to 006662b3 has its CatchHandler @ 006662dc */
        (**(code **)(*plVar4 + 0x38))(plVar4,0);
      }
      FUN_00689b90(&local_a8,0);
      *param_1 = 0;
      FUN_00665d58(param_1 + 8,&local_a8);
      FUN_00689be4(&local_a8);
      return;
    }
    *(undefined1 *)(lVar6 + 0x38) = 1;
  }
  FUN_002934f8(&local_a8,lVar6 + 0x40);
                    /* try { // try from 006661c0 to 006661cb has its CatchHandler @ 00666300 */
  FUN_00689b90(auStack_c8,0);
                    /* try { // try from 006661dc to 006661e3 has its CatchHandler @ 006662e4 */
  (**(code **)(**(long **)(lVar6 + 0x10) + 0x10))(*(long **)(lVar6 + 0x10),auStack_c8,local_68);
  bVar2 = FUN_002937d4(&local_a8);
  if (((bVar2 & 1) == 0) && (*(char *)(lVar6 + 0x50) == '\0')) {
    *(undefined1 *)(lVar6 + 0x50) = 1;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x30) + 0x20);
                    /* try { // try from 00666214 to 0066621b has its CatchHandler @ 006662e0 */
    (**(code **)(*plVar4 + 0x38))(plVar4,0);
  }
  **(undefined1 **)(lVar6 + 0x58) = 1;
  lVar5 = *(long *)(lVar6 + 0x68);
  if (lVar5 != 0) {
    local_28 = std::chrono::system_clock::now();
    local_28 = local_28 + *(long *)(lVar6 + 0x78) * 1000000;
    FUN_00619a0c(lVar5,&local_28);
  }
  *param_1 = bVar2 & 1;
  FUN_00665d58(param_1 + 8,auStack_c8);
  FUN_00689be4(auStack_c8);
  FUN_00293ad8(&local_a8);
  return;
}


