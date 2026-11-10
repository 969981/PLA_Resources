/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052f7b4; name: FUN_0052f7b4
 */


void FUN_0052f7b4(long param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  void *__ptr;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 local_a8;
  long local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  char *local_80;
  undefined4 local_78;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    __ptr = *(void **)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (__ptr != (void *)0x0) {
                    /* try { // try from 0052f7f4 to 0052f7f7 has its CatchHandler @ 0052fe70 */
      free(__ptr);
    }
    puVar14 = *(undefined8 **)(param_1 + 0x108);
    if (puVar14 == (undefined8 *)0x0) {
LAB_0052f85c:
      puVar14 = *(undefined8 **)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else {
      lVar6 = puVar14[1];
      plVar1 = puVar14 + 2;
      do {
        lVar16 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),puVar14 + 1,lVar16);
      }
      if (lVar16 < 1) goto LAB_0052fdc8;
      if (lVar16 != 1) goto LAB_0052f85c;
      (**(code **)*puVar14)(puVar14);
      FUN_002e2ea0(PTR_LAB_04373088,puVar14);
      puVar14 = *(undefined8 **)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    if (puVar14 != (undefined8 *)0x0) {
      lVar6 = puVar14[1];
      plVar1 = puVar14 + 2;
      do {
        lVar16 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),puVar14 + 1,lVar16);
      }
      if (lVar16 < 1) {
LAB_0052fdc8:
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar16 == 1) {
        (**(code **)*puVar14)(puVar14);
        FUN_002e2ea0(PTR_LAB_04373088,puVar14);
      }
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  FUN_003d3c24(param_1 + 0xd8,param_2,param_3);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_003e72a4(*(long *)(param_1 + 0x40),param_2);
    lVar6 = *(long *)(param_1 + 0x40);
    FUN_003e5a44(param_2);
    FUN_002f2c60(&local_80);
    FUN_003ed490(lVar6 + 0xa8,1,&local_80);
  }
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
                    /* try { // try from 0052f91c to 0052f923 has its CatchHandler @ 0052fe7c */
  FUN_002ef750();
  puVar4 = PTR_DAT_04374b58;
  plVar1 = (long *)(param_1 + 0x158);
  if (*(long **)(param_1 + 0x150) != plVar1) {
    cVar2 = PTR_DAT_04374b58[0x10];
    plVar11 = *(long **)(param_1 + 0x150);
    while( true ) {
      if (cVar2 != '\0') {
                    /* try { // try from 0052fa34 to 0052fa53 has its CatchHandler @ 0052fe6c */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                     ,0x6cf,1,
                     "chand=%p: updating subchannel wrapper %p data plane connected_subchannel to %p"
                     ,param_1,plVar11[4],plVar11[5]);
      }
      lVar6 = plVar11[4];
      lVar16 = plVar11[5];
      plVar11[5] = 0;
      puVar14 = *(undefined8 **)(lVar6 + 0x50);
      if (puVar14 != (undefined8 *)0x0) {
        lVar7 = puVar14[1];
        plVar8 = puVar14 + 2;
        do {
          lVar15 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_a0 = lVar16;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 0052f9b0 to 0052f9c7 has its CatchHandler @ 0052fe84 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),puVar14 + 1,lVar15);
        }
        if (lVar15 < 1) {
                    /* try { // try from 0052fda0 to 0052fdc7 has its CatchHandler @ 0052fe68 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar15 == 1) {
          (**(code **)*puVar14)(puVar14);
          FUN_002e2ea0(PTR_LAB_04373088,puVar14);
        }
      }
      *(long *)(lVar6 + 0x50) = lVar16;
      local_a0 = 0;
      FUN_0052ea88(&local_a0);
      plVar8 = (long *)plVar11[1];
      if ((long *)plVar11[1] == (long *)0x0) {
        plVar8 = plVar11 + 2;
        plVar10 = (long *)*plVar8;
        if ((long *)*plVar10 != plVar11) {
          do {
            lVar6 = *plVar8;
            plVar8 = (long *)(lVar6 + 0x10);
            plVar10 = (long *)*plVar8;
          } while (*plVar10 != lVar6);
        }
      }
      else {
        do {
          plVar10 = plVar8;
          plVar8 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if (plVar10 == plVar1) break;
      cVar2 = puVar4[0x10];
      plVar11 = plVar10;
    }
  }
  puVar14 = local_88;
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *param_4;
  *param_4 = uVar9;
  if (*(long *)(param_1 + 0x78) == 0) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    puVar12 = *(undefined8 **)(param_1 + 0x98);
    if (local_88 != (undefined8 *)0x0) {
      lVar6 = local_88[1];
      plVar11 = local_88 + 2;
      do {
        lVar16 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
                    /* try { // try from 0052fae0 to 0052fbdf has its CatchHandler @ 0052fe74 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),local_88 + 1,lVar16);
      }
      if (lVar16 < 1) {
                    /* try { // try from 0052fdf0 to 0052fe67 has its CatchHandler @ 0052fe74 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar16 == 1) {
        (**(code **)*puVar14)(puVar14);
        FUN_002e2ea0(PTR_LAB_04373088,puVar14);
      }
    }
    puVar14 = local_90;
    puVar13 = *(undefined8 **)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    local_88 = puVar12;
    if (local_90 != (undefined8 *)0x0) {
      lVar6 = local_90[1];
      plVar11 = local_90 + 2;
      do {
        lVar16 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),local_90 + 1,lVar16);
      }
      if (lVar16 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar16 == 1) {
        (**(code **)*puVar14)(puVar14);
        FUN_002e2ea0(PTR_LAB_04373088,puVar14);
      }
    }
    puVar14 = local_98;
    puVar12 = *(undefined8 **)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    local_90 = puVar13;
    if (local_98 != (undefined8 *)0x0) {
      lVar6 = local_98[1];
      plVar11 = local_98 + 2;
      do {
        lVar16 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),local_98 + 1,lVar16);
      }
      if (lVar16 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar16 == 1) {
        (**(code **)*puVar14)(puVar14);
        FUN_002e2ea0(PTR_LAB_04373088,puVar14);
        *(undefined8 *)(param_1 + 0xa8) = 0;
        plVar11 = *(long **)(param_1 + 0x80);
        local_98 = puVar12;
        goto joined_r0x0052fd48;
      }
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    plVar11 = *(long **)(param_1 + 0x80);
    local_98 = puVar12;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x80);
  }
joined_r0x0052fd48:
  for (; plVar11 != (long *)0x0; plVar11 = (long *)plVar11[1]) {
    lVar16 = *plVar11;
    lVar6 = *(long *)(lVar16 + 0x10);
    local_a8 = 0;
                    /* try { // try from 0052fc30 to 0052fc7b has its CatchHandler @ 0052fe94 */
    uVar5 = FUN_0052d5e4(lVar6,lVar16,&local_a8);
    if ((uVar5 & 1) != 0) {
      *(code **)(lVar6 + 0x218) = FUN_0052e5f4;
      *(long *)(lVar6 + 0x220) = lVar16;
      *(undefined8 *)(lVar6 + 0x228) = 0;
      *(undefined2 *)(lVar6 + 0x230) = 0;
      *(undefined8 *)(lVar6 + 0x248) = 0;
      *(undefined4 *)(lVar6 + 0x250) = 0;
      *(char **)(lVar6 + 0x238) =
           "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
      *(undefined4 *)(lVar6 + 0x240) = 0xec9;
      local_80 = 
      "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
      local_78 = 0xeca;
      FUN_002f019c(&local_80,lVar6 + 0x210,local_a8);
    }
  }
                    /* try { // try from 0052fd4c to 0052fd53 has its CatchHandler @ 0052fe78 */
  FUN_002ef790(param_1 + 0x58);
  FUN_0052ffcc(param_1 + 0x150,*(undefined8 *)(param_1 + 0x158));
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(long **)(param_1 + 0x150) = plVar1;
  FUN_0052ff00(&local_98);
  FUN_0050d03c(&local_90);
  FUN_0052eec0(&local_88);
  return;
}


