/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f511c; name: FUN_006f511c
 */


void FUN_006f511c(byte *param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_f8 [64];
  undefined8 local_b8;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  undefined1 auStack_80 [64];
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
                    /* try { // try from 006f52b0 to 006f52b7 has its CatchHandler @ 006f52e0 */
        (**(code **)(*plVar4 + 0x38))(plVar4,0);
      }
      FUN_00718c20(&local_a8,0);
      *param_1 = 0;
      FUN_006ef258(param_1 + 8,&local_a8);
      FUN_00718d5c(&local_a8);
      return;
    }
    *(undefined1 *)(lVar6 + 0x38) = 1;
  }
  FUN_002934f8(auStack_f8,lVar6 + 0x40);
                    /* try { // try from 006f51c4 to 006f51cf has its CatchHandler @ 006f5304 */
  FUN_00718c20(&local_a8,0);
                    /* try { // try from 006f51e0 to 006f51e7 has its CatchHandler @ 006f52e8 */
  (**(code **)(**(long **)(lVar6 + 0x10) + 0x10))(*(long **)(lVar6 + 0x10),&local_a8,local_b8);
  bVar2 = FUN_002937d4(auStack_f8);
  if (((bVar2 & 1) == 0) && (*(char *)(lVar6 + 0x50) == '\0')) {
    *(undefined1 *)(lVar6 + 0x50) = 1;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x30) + 0x20);
                    /* try { // try from 006f5218 to 006f521f has its CatchHandler @ 006f52e4 */
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
  FUN_006ef258(param_1 + 8,&local_a8);
  FUN_00718d5c(&local_a8);
  FUN_00293ad8(auStack_f8);
  return;
}


