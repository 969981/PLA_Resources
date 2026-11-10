/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059a890; name: FUN_0059a890
 */


void FUN_0059a890(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  char *local_80;
  undefined4 local_78;
  char local_54 [4];
  
  if (*(long *)(param_2 + 0x1b0) != 0) {
    puVar5 = (undefined8 *)**(long **)(param_2 + 0x1a8);
    **(long **)(param_2 + 0x1a8) = 0;
    if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0059a8d0 to 0059a8d3 has its CatchHandler @ 0059ab8c */
      (**(code **)*puVar5)();
    }
    if (((*(char *)(param_2 + 0x220) == '\0') || (*(char *)(param_2 + 0x203) == '\0')) ||
       (FUN_00305050(param_2 + 0x6a8), *(char *)(param_2 + 0x7d8) != '\0')) {
      cVar4 = *(char *)(param_2 + 0x7d8);
    }
    else {
      FUN_00305050(param_2 + 0x7e8);
      cVar4 = *(char *)(param_2 + 0x7d8);
    }
    if (cVar4 == '\0') {
      lVar1 = param_2 + 0x7e8;
      lVar2 = param_2 + 0x6a8;
      do {
        if (*(long *)(param_2 + 0x808) == 0) {
          if (*(long *)(param_2 + 0x6c8) == 0) break;
          FUN_00305510(lVar1,lVar2);
          *(undefined1 *)(param_2 + 0xb38) = 0;
          iVar8 = *(int *)(param_2 + 0xb34);
          if (iVar8 == 1) goto LAB_0059aa1c;
LAB_0059aa70:
          if (*(long *)(param_2 + 0xcb0) != 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x775,2,"assertion failed: %s","s->decompressed_data_buffer.length == 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar6 = *(long *)(param_2 + 0xc88);
          if (lVar6 == 0) {
            lVar6 = FUN_005a2b60(iVar8);
            *(long *)(param_2 + 0xc88) = lVar6;
          }
          uVar9 = FUN_005a2b50(lVar6,lVar1,param_2 + 0xc90,0,5 - *(long *)(param_2 + 0xb40),local_54
                              );
          if ((uVar9 & 1) == 0) {
            FUN_00305050(lVar2);
            FUN_00305050(lVar1);
            FUN_002f2c60(&local_80,"Stream decompression error.");
            uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                 ,0x786,&local_80,0,0);
          }
          else {
            lVar6 = *(long *)(param_2 + 0xb40) + *(long *)(param_2 + 0xcb0);
            lVar3 = 0;
            if (lVar6 != 5) {
              lVar3 = lVar6;
            }
            *(long *)(param_2 + 0xb40) = lVar3;
            uVar9 = FUN_005a3ba0(param_2 + 0x980,param_2,param_2 + 0xc90,0,
                                 *(undefined8 *)(param_2 + 0x1a8));
            if (local_54[0] != '\0') {
              FUN_005a2be0(*(undefined8 *)(param_2 + 0xc88));
              *(undefined8 *)(param_2 + 0xc88) = 0;
            }
          }
        }
        else {
          if ((*(char *)(param_2 + 0xb38) == '\0') &&
             (iVar8 = *(int *)(param_2 + 0xb34), iVar8 != 1)) goto LAB_0059aa70;
LAB_0059aa1c:
          uVar9 = FUN_005a3ba0(param_2 + 0x980,param_2,lVar1,0,*(undefined8 *)(param_2 + 0x1a8));
        }
        if (uVar9 != 0) {
          *(undefined1 *)(param_2 + 0x203) = 1;
          FUN_00305050(lVar2);
          FUN_00305050(lVar1);
          *(undefined8 *)(param_2 + 0x7e0) = *(undefined8 *)(param_2 + 0x808);
          iVar8 = *(int *)(param_2 + 0x21c);
          goto joined_r0x0059ab58;
        }
      } while (**(long **)(param_2 + 0x1a8) == 0);
    }
    *(undefined8 *)(param_2 + 0x7e0) = *(undefined8 *)(param_2 + 0x808);
    if (**(long **)(param_2 + 0x1a8) == 0) {
      uVar9 = 0;
      iVar8 = *(int *)(param_2 + 0x21c);
joined_r0x0059ab58:
      if (iVar8 != 0) {
        puVar5 = (undefined8 *)**(long **)(param_2 + 0x1a8);
        **(long **)(param_2 + 0x1a8) = 0;
        if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0059a960 to 0059a963 has its CatchHandler @ 0059ab88 */
          (**(code **)*puVar5)();
        }
        uVar7 = *(undefined8 *)(param_2 + 0x1b0);
        *(undefined8 *)(param_2 + 0x1b0) = 0;
        local_80 = 
        "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
        local_78 = 0x49d;
        FUN_002f019c(&local_80,uVar7,0);
      }
      if (4 < uVar9) {
        FUN_002f0430(uVar9,
                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x7af);
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x1b0);
      *(undefined8 *)(param_2 + 0x1b0) = 0;
      local_80 = 
      "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
      local_78 = 0x49d;
      FUN_002f019c(&local_80,uVar7,0);
    }
  }
  return;
}


